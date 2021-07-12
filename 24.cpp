class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
     
    vector<int> index ;
    vector<int> res ;
        int dif ;
    for(int i = 0 ;i<s.size();i++)
    {
      if(s[i]==c)
          index.push_back(i);
    }
        
    for(int i = 0 ;i<s.size();i++)
    {
      if(s[i]==c)
          res.push_back(0);
      else{
           dif  = INT_MAX;
          for(int j=0;j<index.size();j++)
          {
              dif = min(dif,abs(index[j]-i));
          }
          res.push_back(dif);
          
          }
    }
        return res ;
    }
};
#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        string sstr = strs[0] ; 
        for (int i = 1; i < strs.size();i++) {
            if (sstr.length()>strs[i].length())
             {
                 sstr = strs[i];
             }
        }
            int index = 0;
            while ((index < strs.size()) && sstr.length()!=0)
            {
                if(strs[index].substr(0,sstr.length()).compare(sstr)==0)
                {
                  index++;
                }
                else
                 sstr.pop_back();
            }

        }
        return sstr;
    }
};
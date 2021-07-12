class Solution {
public:
    string reverseOnlyLetters(string s) {
    int i = 0 ; 
    int j = s.size()-1;
    while(i<j)
    {
        while(i<j && isalpha(s[i])==0 )i++;
        while(i<j && isalpha(s[j])==0)j--;
        swap(s[i++],s[j--]);    
    }
    return s;
    }
};
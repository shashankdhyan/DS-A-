class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)
            return false;
        if(n == 1)
           return true;
        if(n % 2 != 0)
            return false;
        
     bool div =  isPowerOfTwo((n/2));
        
        if(div == true)
            return true;
        else
            return false;

    }
};
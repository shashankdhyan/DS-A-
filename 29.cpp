class Solution {
public:
    int hammingWeight(uint32_t n) {
     int numb = 0;
        while(n!=0)
        {
            numb++;
            n &=(n-1);
        }
        return numb ;
    }
};
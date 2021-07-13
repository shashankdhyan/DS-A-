// using map 
class Solution {
public:
    int singleNumber(vector<int>& nums) {
     if(nums.size()==1)
     return nums[0];
    map<int,int> ma ;
    for(int i = 0;i<nums.size();i++)
    {
     ma[nums[i]]+=1;
    }
    for(auto itr :ma)
    {
        if(itr.second ==1)
        {
            return itr.first ;
        }
    }
    return  0 ;    
    }
};


//using Xor 

class Solution {
public:
    int singleNumber(vector<int>& nums) {
     if(nums.size()==1)
     return nums[0];
     int result = nums[0] ;
    for(int i = 1;i<nums.size();i++)
    {
      result = result^nums[i] ;
    }
    return result ;    
    }
};
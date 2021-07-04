// Create Target Array in the Given Order
class Solution
{
public:
    vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
    {
        vector<int> vec;
        vector<int>::iterator itr, itrnum;
        itrnum = nums.begin();
        itr = index.begin();
        while (itrnum != nums.end() && itr != index.end())
        {
            vec.insert(vec.begin() + *itr, *itrnum);
            itrnum++;
            itr++;
        }
        return vec;
    }
};
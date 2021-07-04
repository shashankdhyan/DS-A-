//Remove Duplicates

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int i = 0, count = 0;
        if (!nums.size())
            return count;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[i] != nums[j])
            {
                i++;
                swap(nums[i], nums[j]);
                count++;
            }
        }
        return count + 1;
    }
};
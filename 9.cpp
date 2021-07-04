// Range Sum Query - Immutable
class NumArray
{
public:
    vector<int> sum;
    NumArray(vector<int> &nums)
    {

        int sumtill = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sumtill += nums[i];
            sum.push_back(sumtill);
        }
    }

    int sumRange(int left, int right)
    {

        if (left == 0)
        {
            return sum[right];
        }
        else
        {
            return sum[right] - sum[left - 1];
        }
    }
};
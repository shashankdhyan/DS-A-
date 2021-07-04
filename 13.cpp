//Count the Number of Consistent Strings
class Solution
{
public:
    int countConsistentStrings(string allowed, vector<string> &words)
    {
        map<char, int> ma;
        for (auto itr = allowed.begin(); itr != allowed.end(); itr++)
        {
            ma[*itr] = 1;
        }
        int count = 0, flag = 0;
        for (auto itr2 = words.begin(); itr2 != words.end(); itr2++)
        {
            flag = 0;
            for (auto itr1 = (*itr2).begin(); itr1 != (*itr2).end(); itr1++)
            {
                if (ma[*itr1] == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                count++;
        }

        return count;
    }
};
// Truncate sentence
class Solution
{
public:
    string truncateSentence(string s, int k)
    {
        map<string, int> map1;
        for (auto itr = s.begin(); itr != s.end(); itr++)
        {
            if (k > 0)
            {
                map1[*itr] = 1;
                k--;
            }
        }
        string vec;
        for (auto y : map1)
        {
            vec.push_back(y.first);
        }

        return vec;
    }
};
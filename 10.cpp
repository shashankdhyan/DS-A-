// Shift 2D Grid
class Solution
{
public:
    vector<vector<int>> shiftGrid(vector<vector<int>> &grid, int k)
    {

        vector<int> vec;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                vec.push_back(grid[i][j]);
            }
        }
        int ve = vec.size();
        k = k % ve;
        for (int i = 0; i < k; i++)
        {
            vec.insert(vec.begin(), vec[ve - 1]);
            vec.pop_back();
        }
        int pos = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                grid[i].push_back(vec[j + pos]);
            }
        }
        return grid;
    }
};
// Island Perimeter

class Solution
{
public:
    bool isvalid(vector<vector<int>> &grid, int i, int j, int n, int m)
    {
        if (i >= 0 && j >= 0 && i < n && j < m)
        {
            if (grid[i][j])
                return 0;
            return 1;
        }
        return 1;
    }

    int islandPerimeter(vector<vector<int>> &grid)
    {
        int perimeter = 0;
        int n = grid.size(), m = grid[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 1)
                {
                    perimeter += isvalid(grid, i, j - 1, n, m);
                    perimeter += isvalid(grid, i, j + 1, n, m);
                    perimeter += isvalid(grid, i - 1, j, n, m);
                    perimeter += isvalid(grid, i + 1, j, n, m);
                }
            }
        }
        return perimeter;
    }
};
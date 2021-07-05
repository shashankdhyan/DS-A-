class Solution
{
public:
    int projectionArea(vector<vector<int>> &grid)
    {
        int count = 0, maxrow, maxcol;
        int n = grid.size();
        for (int i = 0; i < n; i++)
        {
            maxrow = 0, maxcol = 0;
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] >= 1)
                    count++;
                if (grid[i][j] > maxrow)
                    maxrow = grid[i][j];
                if (grid[j][i] > maxcol)
                    maxcol = grid[j][i];
            }
            count += maxrow + maxcol;
        }

        return count;
    }
};
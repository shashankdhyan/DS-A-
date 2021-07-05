int main()
{
    vector<vector<int>> vec;
    vector<vector<int>> res;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            res[j][i] = vec[i][j];
        }
    }
}

int pos;
int flag = 0;
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        if (i + 1 < row && j + 1 < col)
        {
            if (arr[i][j] != arr[i + 1][j + 1])
            {
                flag = 1;
                break;
            }
        }
        else
            break;
    }
}

if (flag == 1)
    cout << "NOT SPECIAL";
else
    cout << "SPECIAL";

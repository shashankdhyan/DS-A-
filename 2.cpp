#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, maximum = 0;
    int arr1[] = {};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    for (int j = 0; j < n; j++)
    {
        maximum = max(maximum, arr1[i]);
    }
    int toffee = 3;
    for (i = 0; i < n; i++)
    {
        if (arr1[i] + toffee >= maximum)
        {
            cout << "true";
        }
        else
            break;
    }
    while (i < n)
    {
        cout << "false";
    }
}

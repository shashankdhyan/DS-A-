#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    int arr1[] = {};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    map<int, int> map1;
    for (int i = 0; i < n; i++)
    {
        if (map1[arr1[i]])
        {
            count = count + map1[arr1[i]];
            map1[arr1[i]] += 1;
        }
        else
        {
            map1[arr1[i]] += 1;
        }
    }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 0, j = 0;
    int arr1[] = {};
    int arr2[] = {};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
    // Union
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            cout << arr1[i];
            i++;
        }
        else if (arr2[j] < arr1[i])
        {
            cout << arr2[j];
            j++;
        }
        else
        {
            cout << arr1[i];
            i++;
            j++;
        }
    }

    while (i < n)
    {
        cout << arr1[i] << " ";
    }

    while (j < m)
    {
        cout << arr2[j];
    }

    //    intersection
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr1[i])
        {
            j++;
        }
        else
        {
            cout << arr1[i];
            i++;
            j++;
        }
    }
}
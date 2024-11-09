#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {12, 3, 0, 100, 100, 12, 0, 9, 213, 12};
    map<int, int> mp;
    for (int i = 0; i < (sizeof(arr) / sizeof(int)); i++)
    {
        mp[arr[i]]++;
    }
    int maxi = INT_MIN;
    for (auto it : mp)
    {
        maxi = max(maxi, it.second);
        if (it.second == maxi)
        {
            cout << it.first << endl;
        }
    }

    return 0;
}
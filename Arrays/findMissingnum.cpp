#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> m;
    int arr[] = {1, 2, 4, 6, 3, 7, 8};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        m[arr[i]] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (m.find(i) == m.end())
        {
            cout << i << " is missing number in your array" << endl;
        }
    }

    return 0;
}
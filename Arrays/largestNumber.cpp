#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {12, 3, 4, 512, 3, 900, 102, 8, 43, 56, 258};
    int size = sizeof(arr) / sizeof(int);
    int maxi = INT_MIN;
    int smaxi = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxi)
        {
            smaxi = maxi;
            maxi = arr[i];
        }
        if (arr[i] > smaxi && arr[i] != maxi)
        {
            smaxi = arr[i];
        }
    }

    cout << maxi << endl;
    cout << smaxi;

    return 0;
}
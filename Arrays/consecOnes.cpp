// find maximum consecutive ones in array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        int num;
        cin >> num;
        arr[i] = num;
    }
    int count = 0;
    int maxi = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            count++;
            maxi = max(maxi, count);
        }
        else
        {
            count = 0;
        }
    }

    cout << "maximum consecutive ones are k" << maxi;
    return 0;
}
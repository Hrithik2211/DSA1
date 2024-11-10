#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter the size of row and col";
    cin >> row >> col;
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int value;
            cout << "Enter the value to be inserted in matrix";
            cin >> value;
            arr[i][j] = value;
        }
    }

    int usum = 0;
    int lsum = 0;
    int k = 0;
    int h = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = k; j < col; j++)
        {
            usum += arr[i][j];
        }
        k++;
        for (int x = 0; x <= h; x++)
        {
            lsum += arr[i][x];
        }
        h++;
    }
    cout << usum << " " << lsum;
    return 0;
}

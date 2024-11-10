// row = 2, col = 3 find sum;
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
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        
    }
    cout << "The total sum of the matrix is " << sum;

    return 0;
}

// [[1,0,1,0,1],
// [0,1,0,1,0],
// [-1,-1,-1,-1,-1]]
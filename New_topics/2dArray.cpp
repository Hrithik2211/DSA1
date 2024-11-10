#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string fruits[][3] = {
                        {"Mango", "Litchee"},
                        {"Orange", "Guava"},
                        {"Banana", "Apple"},
                        };
    int row_size = sizeof(fruits) / sizeof(fruits[0]);
    int col_size = sizeof(fruits[0]) / sizeof(fruits[0][0]);
    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < col_size; j++)
        {
            cout << fruits[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
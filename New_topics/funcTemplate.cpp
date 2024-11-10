#include <iostream>
#include <bits/stdc++.h>
using namespace std;
template <typename T>
T div(T a, T b)
{
    return a / b != 0 ? a / b : 0.0;
}

template <typename T>
void bubbleSort(T arr[], T n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (arr[j - 1] > arr[j])
                swap(arr[j - 1], arr[j]);
        }
    }
}
int main()
{
    int arr[] = {10, 50, 30, 40, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort<int>(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    double x, y;
    cin >> x >> y;
    int h, k;
    cin >> h >> k;
    cout << div<double>(x, y);
    cout << div<int>(x, y);
    return 0;
}
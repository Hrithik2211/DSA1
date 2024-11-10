#include <iostream>
#include <bits/stdc++.h>
using namespace std;
template <typename T, int length>
class Array
{
public:
    T arr[length];

    void fill(T value)
    {
        for (int i = 0; i < length; i++)
        {
            arr[i] = value;
        }
    }
    T &at(int index)
    {
        return arr[index];
    }
};
int main()
{
    Array<int, 9> intArr;
    intArr.fill(100);
    intArr.at(6) = 90;
    for (int i = 0; i < 9; i++)
    {
        cout << "element at " << i << "=> " << intArr.at(i) << endl;
    }
    Array<string, 4> strArr;
    strArr.fill("Abcd");
    strArr.at(2) = "xyz";
    for (int i = 0; i < 4; i++)
    {
        cout << "The element at " << i << " is =>"<< strArr.at(i) << endl;
    }

    return 0;
}
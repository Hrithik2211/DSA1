#include <iostream>
using namespace std;
int main()
{
    int row;
    cin >> row;
    int k = row;
    for (int i = 0; i < row; i++){
        cout << string((row - i), ' ');
        cout << string((2 * i + 1), '*');
        cout << endl;
    }
        return 0;
}
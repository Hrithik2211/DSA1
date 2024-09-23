// move zeroes to end
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    vector<int> v;
    for (int i = 0; i < size; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    int j = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] != 0)
        {
            swap(v[i],v[j]);
            j++;
        }
    }
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
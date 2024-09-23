#include <iostream>
using namespace std;
int findMissing(int arr[],int m)
{
    for (int i = m-2; i >= 0; i--)
    {
        if(arr[i] != m)
        {
            break;
        }
        m--;
    }
    return m;
}
int main()
{
    int m;
    cout<<"enter the size";
    cin>>m;
    int arr[]= {1,2,3,4,5,7,8,9};
    int x = findMissing(arr,m);
    cout<<x;
    return 0;
}
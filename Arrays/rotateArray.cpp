// rotate the array right
#include <bits/stdc++.h>
using namespace std;
void rev(vector<int> &nums, int s, int e)
{
    while (s <= e)
    {
        swap(nums[s], nums[e]);
        s++;
        e--;
    }
}
int main()
{
    int k;
    cout << "enter the number of steps to rotate";
    cin >> k;
    vector<int> nums;
    int size;
    cout << "now enter the size of vector";
    cin >> size;
    k = k%size;
    for (int i = 0; i < size; i++)
    {
        int n;
        if(i == 0)
        {
            cout << "enter the nos. to push in array";
        }
        cin >> n;
        nums.push_back(n);
    }
    rev(nums,size-k,size-1); 
    rev(nums,0,size-k-1);
    rev(nums,0,size-1);
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
    
    return 0;
}











// 0 1 2 3 4 5 6
// 1 2 3 4 5 6 7

// 0 1 2 3 4 5 6
// 1 2 3 4 7 6 5

// 0 1 2 3 4 5 6
// 4 3 2 1 7 6 5


// 5 6 7 1 2 3 4
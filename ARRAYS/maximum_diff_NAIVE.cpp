#include <bits/stdc++.h>
using namespace std;

// i/p: arr[]={2,3,10,6,4,8,1}
// o/p: 8   // 10 - 2= 8....

int maxDiff(int arr[], int n)
{

    int res = arr[1] - arr[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            res = max(res, arr[j] - arr[i]);
        }
    }
    return res;
}

int main()
{

    return 0;
}
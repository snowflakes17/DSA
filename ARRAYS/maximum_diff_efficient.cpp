#include <bits/stdc++.h>
using namespace std;

// arr[]={2,3,10,6,4,8,1}

// res=arr[1]-arr[0]=1....
// minval=arr[0]=2

int maxDiff(int arr[], int n)
{
    int res = arr[1] - arr[0];
    int minValue = arr[0];

    for (int j = 1; j < n; j++)
    {
        res = max(res, arr[j] - minValue);
        minValue = min(minValue, arr[j]);
    }
    return res;
}

int main()
{

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

// TC === O(Log(n))
// SC === O(1);
// ITERATIVE METHOD IS BETTER THEN RECURSIVE METHOD....
int binarySearch(int arr[], int n, int k)
{

    int l = 0;
    int h = n - 1;

    while (l <= h)
    {
        int mid = (l + h) / 2;

        if (arr[mid] == k)
        {
            return (mid + 1);
        }
        else if (arr[mid] > k)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << binarySearch(arr, n, k) << endl;
    return 0;
}
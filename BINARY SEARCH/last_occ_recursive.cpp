#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int h, int k)
{

    int mid = (l + h) / 2;
    if (l > h)
    {
        return -1;
    }

    if (arr[mid] > k)
    {
        return binarySearch(arr, l, mid - 1, k);
    }
    else if (arr[mid] < k)
    {
        return binarySearch(arr, mid + 1, h, k);
    }

    else
    {

        if (mid == h || arr[mid + 1] != arr[mid])
        {
            return mid;
        }
        else
        {
            return binarySearch(arr, mid+1, h, k);
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

    int l = 0;
    int h = n - 1;

    cout << binarySearch(arr, l, h, k) << endl;

    return 0;
}
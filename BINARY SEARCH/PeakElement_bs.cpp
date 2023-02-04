#include <bits/stdc++.h>
using namespace std;

int peakelement(int arr[], int n)
{
    int h = n - 1;
    int l = 0;

    while (l <= h)
    {
        int mid = (l + h) / 2;
        if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
        {
            return mid;
        }
        if (mid > 0 && arr[mid] <= arr[mid - 1])
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
    int n;
    cin >> n;

    int arr[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << peakelement(arr, n) << endl;
    return 0;
}
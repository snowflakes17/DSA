#include <bits/stdc++.h>
using namespace std;

int ceiling(int arr[], int n, int l, int h, int x)
{

    int mid = (l + h) / 2;

    if (arr[0] >= x)
    {
        return l;
    }

    if (arr[n - 1] < x)
    {
        return -1;
    }

    if (arr[mid] == x)
    {
        return mid;
    }

    else if (arr[mid] < x)
    {
        if (mid + 1 <= h && arr[mid + 1] >= x)
        {
            return mid + 1;
        }
        else
        {
            return ceiling(arr, n, mid + 1, h, x);
        }
    }

    else
    {
        if (mid - 1 >= l && arr[mid - 1] < x)
        {
            return mid;
        }
        else
        {
            return ceiling(arr, n, l, mid - 1, x);
        }
    }
}

int main()
{
    int n, x;
    cin >> n >> x;

    int arr[10000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int l = 0;
    int h = n - 1;
    cout << ceiling(arr, n, l, h, x) << endl;
    return 0;
}
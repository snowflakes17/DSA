#include <bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int k)
{

    int h = n - 1;
    int l = 0;

    while (l <= h)
    {
        int mid = (h + l) / 2;
        if (arr[mid] > k)
        {
            h = mid - 1;
        }
        else if (arr[mid] < k)
        {
            l = mid + 1;
        }

        else
        {
            if (mid == 0 || arr[mid] != arr[mid - 1])
            {
                return mid;
            }

            else
            {
                h = mid - 1;
            }
        }
    }
    return -1;
}

int lastOcc(int arr[], int n, int k)
{

    int h = n - 1;
    int l = 0;

    while (l <= h)
    {
        int mid = (h + l) / 2;
        if (arr[mid] > k)
        {
            h = mid - 1;
        }
        else if (arr[mid] < k)
        {
            l = mid + 1;
        }

        else
        {
            if (mid == n - 1 || arr[mid] != arr[mid + 1])
            {
                return mid;
            }

            else
            {
                l = mid + 1;
            }
        }
    }
    return -1;
}

int countOcc(int arr[], int n, int k)
{

    // int count=0;

    int first = firstOcc(arr, n, k);

    if (first == -1)
    {
        return 0;
    }
    else
    { // index         //index
        return (lastOcc(arr, n, k) - first + 1);
    }
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

    cout << countOcc(arr, n, k) << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int rotatedArray(int arr[], int n, int x)
{
    int h = n - 1;
    int l = 0;

    while (l <= h)
    {
        int mid = (h + l) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }

        //....LEFT HALF....
        if (arr[0] < arr[mid])
        {

            if (arr[0] <= x && arr[mid] > x)
            {
                // return binarySearch(arr,n,l,mid-1,x);
                h = mid - 1;
            }

            else
            {
                l = mid + 1;
            }
        }
        //.....RIGHT HALF.....
        else
        {
            if (x > arr[mid] && x <= arr[h])
            {
                l = mid + 1;
            }
            else
            {
                h = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[1000];
    int n, x;
    cin >> n >> x;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << rotatedArray(arr, n, x) << endl;
    return 0;
}
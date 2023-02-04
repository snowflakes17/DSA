#include <bits/stdc++.h>
using namespace std;

// .......ITERATIVE METHOD......
// TC === O(LOG(N))

int firstOcc(int arr[], int n, int k)
{

    int l = 0;
    int h = n - 1;

    while (l <= h)
    {
        int mid = (l + h) / 2;

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
            if (mid == 0 || arr[mid - 1] != arr[mid])
            {
                return mid;
            }
            else
            {
                h = mid - 1;
            }
        }

        return -1;
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

    int l = 0;
    int h = n - 1;

    cout << firstOcc(arr, n, k) << endl;
    return 0;
}
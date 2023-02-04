#include <bits/stdc++.h>
using namespace std;

int countOcc(int arr[], int n, int k)
{
    int l = 0, h = n - 1;

    while (l <= h)
    {
        int mid = (l + h) / 2;

        if (arr[mid] == 0)
        {
            l = mid + 1;
        }
        else
        {
            if (mid == 0 || arr[mid - 1] == 0)
            {
                return (n - mid);
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
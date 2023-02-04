#include <bits/stdc++.h>
using namespace std;

// .......NAIVE METHOD......
// TC=== O(N)

int firstOcc(int arr[], int n, int k)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return i;
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

    cout << firstOcc(arr, n, k) << endl;
    return 0;
}
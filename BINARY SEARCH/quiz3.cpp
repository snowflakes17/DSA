#include <bits/stdc++.h>
using namespace std;

bool pairDiff(int arr[], int n, int k)
{
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        if (abs(arr[left] - arr[right]) == k)
        {
            return true;
        }
        else if (abs(arr[left] - arr[right]) > k)
        {
            right--;
        }
        else
        {
            left++;
        }
    }
    return false;
}

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[10000];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << pairDiff(arr, n, k);

    return 0;
}
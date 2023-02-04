#include <bits/stdc++.h>
using namespace std;

// TC === O(n)

bool toPointer(int arr[], int n, int x)
{

    int left = 0;
    int right = n - 1;
    while (left <= right)
    {

        if (arr[left] + arr[right] == x)
        {
            return true;
        }
        else if (arr[left] + arr[right] > x)
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
    int n;
    cin >> n;
    int x;
    cin >> x;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << toPointer(arr, n, x);
    return 0;
}
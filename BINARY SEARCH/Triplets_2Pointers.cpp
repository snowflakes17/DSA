#include <bits/stdc++.h>
using namespace std;

//......O(n^2)......

bool toPointer(int arr[], int size, int k, int val)
{

    int left = 0;
    int right = size - 1;

    while (left < right)
    {

        if (arr[left] + arr[right] == val)
        {
            return true;
        }
        else if (arr[left] + arr[right] > val)
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

bool to3Pointer(int arr[], int n, int x)
{

    for (int i = 0; i < n; i++)
    {
        if (toPointer(arr, n - 1, i + 1, x - arr[i]))
        {
            return true;
        }
    }
    return false;
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
    int x;
    cin >> x;

    to3Pointer(arr, n, x);
    return 0;
}
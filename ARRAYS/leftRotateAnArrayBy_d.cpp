#include <bits/stdc++.h>
using namespace std;

// naive approach ... O(n*d)

void leftRotateBy1(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

void rotate(int arr[], int n, int d)
{
    for (int i = 0; i < d; i++)
    {
        leftRotateBy1(arr, n);
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    return 0;
}
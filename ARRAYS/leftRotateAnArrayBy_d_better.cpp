#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int d)
{
    int temp[d];

    // in this for loop v are storing the first d elements in temp
    // so that at last v will put temp in last of the arr
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    // shifting rest elements from by d
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }

    // in this for loop v r storind the d elements in temp variable
    for (int i = 0; i < d; i++)
    {
        arr[n - d + i] = temp[i];
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
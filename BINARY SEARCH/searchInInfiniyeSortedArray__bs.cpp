#include <bits/stdc++.h>
using namespace std;

// TC === O(Log(posn)).....

int binarySearch(int arr[], int l, int h, int x)
{

    int mid = (l + h) / 2;

    if (l > h)
    {
        return -1;
    }

    if (arr[mid] == x)
    {
        return mid;
    }
    else if (arr[mid] > x)
    {
        return binarySearch(arr, l, mid - 1, x);
    }
    else
    {
        return binarySearch(arr, mid + 1, h, x);
    }
}

int search(int arr[], int x)
{

    int i = 1;

    while (arr[i] < x)
    {
        i = i * 2;

        if (arr[i] == x)
        {
            return i;
        }
    }

    return binarySearch(arr, (i / 2) + 1, i - 1, x);
}

int main()
{

    int x;
    cin >> x;

    int arr[10000];
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }

    cout << search(arr, x) << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

// O(n) === TC
// O(1) === SC

void leftRotatre(int arr[], int n, int d)
{
    reverse(arr, 0, d - 1); // reversing the 1st d elements
    reverse(arr, d, n - 1); // reversing the rest of the elements
    reverse(arr, 0, n - 1); // reversing the whole arr... we get the answer...
}

void reverse(int arr[], int l, int h)
{
    while (l < h)
    {

        swap(arr[l], arr[h]);
        l++;
        h--;
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
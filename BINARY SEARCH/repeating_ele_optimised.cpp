#include <bits/stdc++.h>
using namespace std;

int repeating(int arr[], int n)
{

    int slow = arr[0], fast = arr[0];

    do
    {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    slow = arr[0];
}

int main()
{
    int n;
    cin >> n;

    int arr[10000];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    repeating(arr, n);
    return 0;
}
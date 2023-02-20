#include <bits/stdc++.h>
using namespace std;

int missing(int arr[], int n)
{

    int res = 0;
    int a = 0;
    for (int i = 1; i <= n + 1; i++)
    {
        res = res ^ i;
    }

    for (int i = 0; i < n; i++)
    {
        a = a ^ arr[i];
    }
    return (res ^ a);
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

    cout << missing(arr, n) << endl;

    return 0;
}
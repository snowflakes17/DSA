#include <bits/stdc++.h>
using namespace std;

// TC===O(n)   SP===O(1).....

void findOdd(int arr[], int n)
{

    int res = 0;

    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    cout << res << endl;
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

    findOdd(arr, n);

    return 0;
}
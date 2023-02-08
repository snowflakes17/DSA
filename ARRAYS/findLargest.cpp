#include <bits/stdc++.h>
using namespace std;

int large(int arr[], int n)
{

    int res = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[res])
        {
            res = i;
        }
    }
    return res;
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

    cout << large(arr, n) << endl;
    ;
    return 0;
}
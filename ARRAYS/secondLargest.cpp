#include <bits/stdc++.h>
using namespace std;

//....NAIVE APPROACH....

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

int seclarge(int arr[], int n)
{

    int larg = large(arr, n);

    int res = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[larg])
        {
            if (res == -1)
            {
                res = i;
            }
            else if (arr[i] > arr[res])
            {
                res = i;
            }
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

    cout << seclarge(arr, n) << endl;

    return 0;
}
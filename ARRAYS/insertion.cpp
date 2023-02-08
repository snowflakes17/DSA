#include <bits/stdc++.h>
using namespace std;

int insert(int arr[], int n, int x, int pos, int cap)
{

    if (cap == n)
    {
        return n;
    }

    int ind = pos - 1;
    for (int i = n - 1; i >= ind; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[ind] = x;
    return (n + 1);
}

int main()
{

    int n, x, pos, cap;
    cin >> n >> x >> pos >> cap;

    int arr[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k = insert(arr, n, x, pos, cap);

    for (int i = 0; i < n + 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
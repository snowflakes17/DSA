#include <bits/stdc++.h>
using namespace std;

void rev(int arr[], int n)
{
    int st = 0, end = n - 1;

    while (st < end)
    {
        int temp = arr[st];
        arr[st] = arr[end];
        arr[end] = temp;
        st++;
        end--;
    }

    // for (int i = 0; i <= (n - 1 / 2); i++)
    // {
    //     int temp = arr[i];
    //     arr[i] = arr[n - i - 1];
    //     arr[n - i - 1] = temp;
    // }

    // return n;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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

    rev(arr, n);

    return 0;
}
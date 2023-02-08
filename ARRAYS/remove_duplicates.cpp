#include <bits/stdc++.h>
using namespace std;

int removeDup(int arr[], int n)
{

    int k = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[k - 1] != arr[i])
        {
            arr[k] = arr[i];
            k++;
        }
    }

    return k;
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

    // cout << "size of array :: " << removeDup(arr, n) << endl;

    n = removeDup(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

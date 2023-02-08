#include <bits/stdc++.h>
using namespace std;
// O(n)
void leftRotate(int arr[], int n)
{
    int temp = arr[0];

    for (int i = 0; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
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
#include <bits/stdc++.h>
using namespace std;

void freq(int arr[], int n)
{
    int cnt = 1, i = 1;

    while (i < n)
    {
        while (i < n && arr[i] == arr[i - 1])
        {
            cnt++;
            i++;
        }

        cout << arr[i - 1] << " " << cnt;
        i++;
        cnt = 1;
    }
    if (n == 1 || arr[n - 1] != arr[n - 2])
    {
        cout << arr[n - 1] << " " << 1;
    }
}

int main()
{
    return 0;
}
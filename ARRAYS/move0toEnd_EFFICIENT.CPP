#include <bits/stdc++.h>
using namespace std;

// here we will keep a count on the no. of swaps which will
// denote the positions of the first 0 in arr and swap with the
// next non 0 element of the arr...

void move(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
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
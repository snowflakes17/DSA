#include <bits/stdc++.h>
using namespace std;

// in this approach v will 1st print last ele as it will always be leader
// then v will run loop from n-2 to i=0 and check if curr_ledr < arr[i]
// then then print arr[i]...

//O(n)

void ledr(int arr[], int n)
{
    int crnt_ledr = arr[n - 1];
    cout << arr[n - 1] << " ";

    for (int i = n - 2; i >= 0; i--)
    {
        if (crnt_ledr < arr[i])
        {
            crnt_ledr = arr[i];
            cout << crnt_ledr << " ";
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
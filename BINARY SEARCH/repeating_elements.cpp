#include <bits/stdc++.h>
using namespace std;

//.....O(n) && O(n)..... //but we can have more optimised code wit SC === O(1)

int repeating(int arr[], int n)
{

    bool visited[n];
    memset(visited, false, sizeof(visited));

    for (int i = 0; i < n; i++)
    {
        if (visited[arr[i]]) // if already visited
            return arr[i];

        visited[arr[i]] = true; // jitne bhi 1st time aa rahe use true kar do...
    }
    return -1;
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

    cout << repeating(arr, n) << endl;
    return 0;
}
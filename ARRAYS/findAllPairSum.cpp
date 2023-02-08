#include <bits/stdc++.h>
using namespace std;

// Given two unsorted arrays A of size N and B of size M of distinct elements,
//  the task is to find all pairs from both arrays whose sum is equal to X.

// Input:
// A[] = {1, 2, 4, 5, 7}
// B[] = {5, 6, 3, 4, 8}
// X = 9
// Output:
// 1 8
// 4 5
// 5 4

vector<pair<int, int>> allPairs(int a[], int b[], int n, int m, int x)
{
    // Your code goes here
    unordered_set<int> s;
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }

    for (int j = 0; j < m; j++)
    {
        if (s.find(x - b[j]) != s.end())
        {
            v.push_back({x - b[j], b[j]});
        }
    }
    sort(v.begin(), v.end());
    return v;
}

int main()
{
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    // // TC=O(N^2)....
    // int adj[n + 1][m + 1];

    // for (int i = 0; i < m; i++)
    // {
    //     int u, v;

    //     cin >> u >> v;
    //     adj[u][v] = 1;
    //     adj[u][v] = 1;
    // }

    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        // TC= O(N).....

        // u<----> v;
        // u----> v;

        adj[u].push_back(v); // O(E)  //FOR DIRECTED GRAPH
        // adj[v].push_back(u);
    }
    return 0;
}
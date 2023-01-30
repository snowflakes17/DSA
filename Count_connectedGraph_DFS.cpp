#include <bits/stdc++.h>
using namespace std;

void DFSRec(vector<int> adj[], int s, bool visited[])
{

    visited[s] = true;
    cout << s << " ";

    for (int u : adj[s])
    {
        if (visited[u] == false)
        {
            DFSRec(adj, u, visited);
        }
    }
}

void DFS(vector<int> adj[], int V)
{
    bool visited[V];
    int count = 0;

    for (int i = 0; i < V; i++)
    {
        if (visited[i] == false)
        {
            DFSRec(adj, i, visited);
        }
    }
}

int main()
{
    return 0;
}
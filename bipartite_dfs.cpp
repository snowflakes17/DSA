#include <bits/stdc++.h>
using namespace std;

bool dfs(int ind, int col, vector<int> adj[], int color[])
{
    color[ind] = col;

    for (auto it : adj[ind])
    {
        if (color[it] == -1)
        {
            if (dfs(it, !col, adj, color) == false)
                return false;
        }
        else if (color[it] == color[ind])
        {
            return false;
        }
    }
    return true;
}

bool isBipartite(int V, vector<int> adj[])
{

    int color[V];

    for (int i = 0; i < V; i++)
    {
        color[i] = -1;
    }
    for (int i = 0; i < V; i++)
    {
        if (color[i] == -1)
        {
            if (dfs(i, 0, adj, color) == false)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    return 0;
}
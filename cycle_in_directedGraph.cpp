#include <bits/stdc++.h>
using namespace std;

bool dfs(int node, int vis[], int pathVis[], vector<int> adj[])
{

    vis[node] = 1;
    pathVis[node] = 1;

    for (auto it : adj[node])
    {

        // when the node is not visited....
        if (!vis[it])
        {
            if (dfs(it, vis, pathVis, adj) == true)
                return true;
        }

        // node is already visited and now has to be visited on same path
        else if (pathVis[it])
        {
            return true;
        }
    }

    pathVis[node] = 0;
    return false;
}

bool isCyclic(int V, vector<int> adj[])
{
    int vis[] = {0};
    int pathVis[] = {0};

    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            if (dfs(i, vis, pathVis, adj) == true)
                return true;
        }
    }
    return false;
}

int main()
{
    return 0;
}
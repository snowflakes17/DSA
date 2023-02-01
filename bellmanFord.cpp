#include <bits/stdc++.h>
using namespace std;

vector<int> bellman_ford(int V, vector<vector<int>> &edges, int S)
{
    vector<int> dist(V, 1e8);

    dist[S] = 0;
    for (int i = 0; i < V; i++)
    {
        for (auto it : edges)
        {
            int u = it[0];
            int v = it[1];
            int wt = it[2];

            if (wt + dist[u] < dist[v])
            {
                dist[v] = wt + dist[u];
            }
        }
    }

    for (auto it : edges)
    {
        int u = it[0];
        int v = it[1];
        int wt = it[2];

        if (wt + dist[u] < dist[v])
        {
            return {-1};
        }
    }
    return dist;
}

int main()
{
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
{
    // Code here
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    vector<int> dist(V);
    for (int i = 0; i < V; i++)
    {
        dist[i] = 1e9;
    }

    dist[S] = 0;

    pq.push({0, S});

    while (!pq.empty())
    {
        int wt = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        for (auto it : adj[node])
        {
            int edgewt = it[1];
            int ver = it[0];

            if (wt + edgewt < dist[ver])
            {

                dist[ver] = wt + edgewt;
                pq.push({dist[ver], ver});
            }
        }
    }
    return dist;
}

int main()
{
    return 0;
}
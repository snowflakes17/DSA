#include <bits/stdc++.h>
using namespace std;

bool check(int st, int V, vector<int> adj[], int color[])
{
    queue<int> q;
    q.push(st);
    color[st] = 0;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for (auto it : adj[node])
        {

            // if adj node is yet not colored...v give the opp color...
            if (color[it] == -1)
            {
                color[it] != color[node];
                q.push(it);
            }

            // if adj node is colored the same...the other did it color with some other path
            else if (color[it] == color[node])
            {
                return false;
            }
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
            if (check(i, V, adj, color) == false)

                return false;
        }
    }
    return true;
}
int main()
{
    return 0;
}
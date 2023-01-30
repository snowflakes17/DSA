#include <bits/stdc++.h>
using namespace std;

// Print number of islands in a graph (or number of connected components in a graph).

void BFS(vector<int> adj[], int s, bool visited[])
{
    queue<int> q;
    visited[s] = true;
    q.push(s);

    while (q.empty() == false)
    {
        int u = q.front();
        q.pop();
        cout << u << " ";

        for (int x : adj[u])
        {
            if (visited[x] == false)
            {
                visited[x] = true;
                q.push(x);
            }
        }
    }

    //  for(int )
}

int BFSDin(vector<int> adj[], int V)
{

    bool visited[V + 1];
    int count = 0;
    for (int i = 0; i < V; i++)
    {
        visited[i] = false;
        for (int i = 0; i < V; i++)
        {
            if (visited[i] == false)
            {
                // visited[i]=true;
                BFS(adj, i, visited);
                count++;
            }
        }
    }
    return count;
}

void addEdge(vector<int> adj[], int u, int v)
{

    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main()
{

    int V = 7;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 2, 3);
    addEdge(adj, 1, 3);
    addEdge(adj, 4, 5);
    addEdge(adj, 5, 6);
    addEdge(adj, 4, 6);

    cout << "Number of islands: " << BFSDin(adj, V);

    return 0;
}
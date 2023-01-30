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

void DFS(vector<int> adj[], int V, int s)
{

    bool visited[V];
    for (int i = 0; i < V; i++)
    {
        visited[i] = false;
    }

    DFSRec(adj, s, visited);
}

int main()
{

    return 0;
}

// void dfsRec(int start,vector<int>adj[],int vis[],vector<int>&dfs){

//       vis[start]=1;
//       dfs.push_back(start);
//       for(auto it : adj[start]){
//           if(!vis[it]){
//               dfsRec(it,adj,vis,dfs);
//           }
//       }
//   }
//     // Function to return a list containing the DFS traversal of the graph.
//     vector<int> dfsOfGraph(int V, vector<int> adj[]) {
//         // Code here

//         int vis[V]={0};
//         int start=0;

//         vector<int>dfs;
//         dfsRec(start,adj,vis,dfs);
//         return dfs;
//     }

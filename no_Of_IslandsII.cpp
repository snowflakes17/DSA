#include <bits/stdc++.h>
using namespace std;
class DisjointSet
{
    vector<int> rank, parent, size;

public:
    DisjointSet(int n)
    {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1);

        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
            size[i] = 1;
        }
    }
    int findUpar(int node)
    {
        if (node == parent[node])
        {
            return node;
        }
        return parent[node] = findUpar(parent[node]);
    }

    void unionBySize(int u, int v)
    {
        int ulp_u = findUpar(u);
        int ulp_v = findUpar(v);

        if (ulp_u == ulp_v)
        {
            return;
        }
        if (size[ulp_u] < size[ulp_v])
        {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else
        {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};

class Solution
{
public:
    vector<int> numOfIslands(int n, int m, vector<vector<int>> &operators)
    {
        // code here
        DisjointSet ds(n * m);
        int vis[n][m];

        memset(vis, 0, sizeof vis);
        int cnt = 0;
        vector<int> ans;

        for (auto it : operators)
        {
            int r = it[0];
            int c = it[1];

            if (vis[r][c] == 1)
            {
                ans.push_back(cnt);
                continue;
            }

            vis[r][c] = 1;
            cnt++;

            int dr[] = {-1, 0, 1, 0};
            int dc[] = {0, 1, 0, -1};

            for (int i = 0; i < 4; i++)
            {
                int nr = r + dr[i];
                int nc = c + dc[i];

                if (nr >= 0 && nr < n && nc >= 0 && nc < m)
                {
                    if (vis[nr][nc] == 1)
                    {
                        int nodeNode = r * m + c;
                        int adjnode = nr * m + nc;

                        if (ds.findUpar(nodeNode) != ds.findUpar(adjnode))
                        {
                            cnt--;
                            ds.unionBySize(nodeNode, adjnode);
                        }
                    }
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};

int main()
{
    return 0;
}
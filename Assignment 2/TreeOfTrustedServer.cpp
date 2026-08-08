#include <bits/stdc++.h>
using namespace std;

void dfs(int node,int parent,int currXor,vector<vector<int>>& adj,vector<int> keys, int K,int &count){
    currXor ^= keys[node];

    if(currXor >= K)
        count++;

    for(int child : adj[node])
    {
        if(child != parent)
        {
            dfs(child, node, currXor, adj, keys, K, count);
        }
    }
}

int trusted_servers(vector<int> keys,int N, int K, vector<pair<int,int>> edges){
    keys.insert(keys.begin(), 0);

    vector<vector<int>> adj(N + 1);

    for(auto e : edges)
    {
        adj[e.first].push_back(e.second);
        adj[e.second].push_back(e.first);
    }
    int count = 0;
    dfs(1, 0, 0, adj, keys, K, count);

    return count;
}

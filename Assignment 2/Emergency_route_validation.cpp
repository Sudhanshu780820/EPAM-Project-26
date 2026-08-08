#include<bits/stdc++.h>
using namespace std;
int reachable_cities(int N, int M,int D, vector<pair<int,int>>edges){
    vector<vector<int>>adj(N+1);
    for(int i=0; i<edges.size(); i++){
        adj[edges[i].first].push_back(edges[i].second);
        adj[edges[i].second].push_back(edges[i].first);

    }
    vector<bool>visited(adj.size(),false);
    queue<int>q;
    q.push(1);
    visited[1]=true;

    int k=0;
    int count=1;
    
    while(k<D){
        
        int n=q.size();
        for(int j=0; j<n; j++){
            for(int i=0; i<adj[q.front()].size(); i++){
                if(visited[adj[q.front()][i]]==false){
                    q.push(adj[q.front()][i]);
                     count++;
                    visited[adj[q.front()][i]]=true;
                }
                

            }
            q.pop();
        }
        k++;
    }
    return count;

}

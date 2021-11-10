#include <bits/stdc++.h>
using namespace std;
int main(){
   
//adjaceny list of bidirectional graph
//space complexixty=2*edges
    int n;cin>>n;
    int m;cin>>m;//m==edges
    std::vector<int> adj[n+1];
    for(auto i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
//adjaceny list of weighted graph graph
        int n;cin>>n;
    int m;cin>>m;//m==edges
    std::vector<pair<int,int>> adj[n+1];
    for(auto i=0;i<m;i++)
    {
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }

return 0;
}

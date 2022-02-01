#include<bits/stdc++.h>
using namespace std;

int vertex;
int edges;

void bfs(int src,vector<int> adj[]){
 queue<int>q;
 q.push(src);
 vector<bool> vis(vertex+1,0);
 vis[src]=1;
 while(!q.empty())
 {
 cout<<q.front()<<" ";
    int index=q.front();
    q.pop();
    for(auto it:adj[index]){
        if(vis[it]==0)
        {
            q.push(it);
            vis[it]=1;
        }
    }
 }


}
int main()
{
    cin>>vertex;
   cin>>edges;
vector<int> adj[vertex+1];

    for(auto i=0;i<edges;i++ )
    {
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
  bfs(0,adj);   
  
  }

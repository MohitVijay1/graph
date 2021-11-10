void bfsofgraph(int node,vector<int> adj[],int src)
{
    vector<bool> vis(node+1,0);
    queue<int>q;
    q.push(src);
    vis[src]=true;
    while(!q.empty())
    {
        int lr=q.top();
        cout<<lr<<" ";
        q.pop();
        for(auto it:adj[lr])
        {
            if(!vis[it])
            {
                q.push(it);
                vis[it]=true;
            }
        }
    }
}

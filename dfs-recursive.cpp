vector<int>dfs;
    vector<bool> vis;
    queue<int>q;
   void dfss(int src,vector<int> adj[],int v)
    {
        
        dfs.push_back(src);
      vis[src]=true;
        for(auto it:adj[src])
        {
            if(!vis[it])
            {
                dfss(it,adj,v);
            }
        }
      
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
       int src=0;
       vis.resize(V+1);
       for(auto i=0;i<V;i++)
          vis[i]=false;
          dfss(src,adj,V);
         return dfs;
    }

 vector<int> dfs;
    void dfss(int src, vector<int> adj[],int v){
        vector<bool>vis(v+1,0);
        stack<int>s;
        s.push(src);
        
        while(!s.empty())
        {int ln=s.top();
        dfs.push_back(ln);
        vis[ln]=1;
            s.pop();
            for(auto it:adj[ln]){
                if(!vis[it])
                {
                    s.push(it);
                    vis[it]=1;
                }
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
       dfss(0,adj,V);
       return dfs;
    }

bool cyclebfs(int src,vector<int> adj[],vector<bool> vis)
 {
     queue<pair<int ,int>>q;
     q.push({src,-1});
     while(!q.empty())
     {
         int ln=q.front().first;
         int parent=q.front().second;
         vis[ln]=1;
         q.pop();
         for(auto it:adj[ln])
         {
             if(!vis[it])
            {
                q.push({it,ln});
                vis[it]=1;
            }
            else if(parent!=it)
               return true;
            
         }
     }
     return false;
 }
    bool isCycle(int V, vector<int> adj[]) {
       vector<bool> vis(V+1,0);
       for(auto i=0;i<V;i++)
       {
           if(!vis[i])
           {  
               if(cyclebfs(i,adj,vis))
                   return true;
           }
       }
  return false;  }

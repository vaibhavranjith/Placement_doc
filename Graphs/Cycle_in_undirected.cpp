bool isCycle(int nd,vector<int> g[],vector<bool> &vis,int parent){
    vis[nd]=true;
    for(int i=0;i<g[nd].size();i++){
        if(!vis[g[nd][i]]){
            if(isCycle(g[nd][i],g,vis,nd))
                return true;
        }
        else if(g[nd][i]!=parent)
            return true;
    }
    return false;
}

bool isCyclic(vector<int> g[], int V)
{
   // Your code here
   vector<bool> vis(V,false);
   for(int i=0;i<V;i++){
       if(!vis[i]){
            if(isCycle(i,g,vis,-1))
                return true;
       }
   }
   return false;
}

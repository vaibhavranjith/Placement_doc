bool isCycle(int nd,vector<bool> &vis,vector<bool> &st,vector<int> adj[]){
    if(vis[nd]==false){
        vis[nd]=true;
        st[nd]=true;
        for(int i=0;i<adj[nd].size();i++){
            if(!vis[adj[nd][i]] && isCycle(adj[nd][i],vis,st,adj))
                return true;
            else if(st[adj[nd][i]])
                return true;
        }
    }
    st[nd]=false;
    return false;
}
bool isCyclic(int V, vector<int> adj[])
{
    vector<bool> vis(V,false);
    vector<bool> st(V,false);
    for(int i=0;i<V;i++){
        if(isCycle(i,vis,st,adj))
                return true;
    }
    return false;
}

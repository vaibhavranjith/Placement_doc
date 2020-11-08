void dfs(int nd,vector<int> adj[],vector<bool> &vis,vector<int> &arr){
    if(vis[nd])
        return;
    vis[nd]=true;
    for(int i=0;i<adj[nd].size();i++){
        if(!vis[adj[nd][i]]){
            dfs(adj[nd][i],adj,vis,arr);
        }
    }
    arr.push_back(nd);  
}
vector<int> topoSort(int V, vector<int> adj[]) {
    // Your code
    vector<int> arr;
    vector<bool> vis(V,false);
    dfs(0,adj,vis,arr);
    return arr;
}

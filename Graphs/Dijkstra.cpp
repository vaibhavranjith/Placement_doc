int min_accum(vector<int> dist,vector<bool> sptset,int V){
    int min=INT_MAX,index;
    for(int i=0;i<V;i++)
        if(!sptset[i] and dist[i]<=min){
            min=dist[i];
            index=i; 
        }
    return index; 
}
vector <int> dijkstra(vector<vector<int>> g, int src, int V){
    vector<bool> sptset(V,false);
    vector<int> dist(V,INT_MAX);
    dist[src]=0;
    for(int i=0;i<V-1;i++){
        int min_i=min_accum(dist,sptset,V);
        sptset[min_i]=true;
        for(int j=0;j<V;j++)
            if(!sptset[j] and g[min_i][j] and dist[min_i]!=INT_MAX and dist[min_i]+g[min_i][j]<dist[j])
                dist[j]=dist[min_i]+g[min_i][j];
    }
    return dist;
}

vector<int> arr;
vector<bool> visited;
void dfsi(vector<int> g[],int nd){
    if(visited[nd])
        return;
    visited[nd]=true;
    arr.push_back(nd);
    for(int i=0;i<g[nd].size();i++){
        if(!visited[g[nd][i]]){
            dfsi(g,g[nd][i]);
        }
    }
}
vector <int> dfs(vector<int> g[], int N)
{
    arr.clear();
    visited=vector<bool>(N,false);
    dfsi(g,0);
    return arr;
}

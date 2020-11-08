vector <int> bfs(vector<int> g[], int N) {
    queue<int> st;
    st.push(0);
    vector<int> arr;
    vector<int> visited(N,false);
    arr.push_back(0);
    visited[0]=true;
    while(!st.empty()){
        int curr=st.front();st.pop();
        for(int i=0;i<g[curr].size();i++){
            if(!visited[g[curr][i]]){
                visited[g[curr][i]]=true;
                st.push(g[curr][i]);
                arr.push_back(g[curr][i]);
            }
        }
    }
    return arr;
}

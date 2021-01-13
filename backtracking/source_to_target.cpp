void backtrack(vector<vector<int>> &ans,vector<int> cur,vector<vector<int>> &g,int des,int src){
        cur.push_back(src);
        if(src==des) ans.push_back(cur);
        for(int i=0;i<g[src].size();i++)
           backtrack(ans,cur,g,des,g[src][i]);
}
vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> cur;
        backtrack(ans,cur,graph,graph.size()-1,0);
        return ans;
}

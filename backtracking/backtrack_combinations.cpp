void backtrack(vector<vector<int>> &ans,vector<int> &cur,int n,int k){
        if(k==0) ans.push_back(cur);
        for(int i=0;i<n;i--){
            cur.push_back(i);
            backtrack(ans,cur,i-1,k-1);
            cur.pop_back();
        }
    }
vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int>cur;
        backtrack(ans,cur,n,k);
        return ans;
}

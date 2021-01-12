void backtrack(vector<vector<int>> &ans,vector<int> &cur,int k,int n,int ind){
        if(k==0 and n==0){
           ans.push_back(cur);
           return;
        }
        if(n<ind)
            return;
        for(int i=ind;i<=9;i++){
            cur.push_back(i);
            backtrack(ans,cur,k-1,n-i,i+1);
            cur.pop_back(); 
        }
    }
vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> cur;
        backtrack(ans,cur,k,n,1);
        return ans;
}

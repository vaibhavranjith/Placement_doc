void backtrack(vector<vector<int>> &ans,vector<int> &cur,vector<int> &cd,int t,int ind){
        if(t==0){
            ans.push_back(cur);
            return;
        }
        if(t<0)
            return;
        for(int i=ind;i<cd.size() and cd[i]<=t;i++){
            cur.push_back(cd[i]);
            backtrack(ans,cur,cd,t-cd[i],i);
            cur.pop_back();
        }
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        vector<int> cur;
        backtrack(ans,cur,candidates,target,0);
        return ans;
}

void backtrack(vector<vector<int>> &ans,vector<int> &cur,vector<int> &cd,int t,int ind){
        if(t==0){
            ans.push_back(cur);
            return;
        }
        for(int i=ind;i<cd.size() and cd[i]<=t;i++)
            if(i==ind || cd[i]!=cd[i-1]){
                cur.push_back(cd[i]);
                backtrack(ans,cur,cd,t-cd[i],i+1);
                cur.pop_back();
            }
}
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> cur;
        backtrack(ans,cur,candidates,target,0);
        return ans;
}

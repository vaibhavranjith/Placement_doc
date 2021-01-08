//rather slow solution but intuitive
int min_cuts(int i,int j,vector<vector<int>> &dp, vector<int> &cuts){
        if(i+1==j)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        dp[i][j]=INT_MAX;
        for(int k=i+1;k<j;k++)
            dp[i][j]=min(dp[i][j],(cuts[j]-cuts[i]) + min_cuts(i,k,dp,cuts)+min_cuts(k,j,dp,cuts));
        return dp[i][j];
}
    
int minCost(int n, vector<int>& cuts) {
        cuts.insert(cuts.begin(),0);
        cuts.push_back(n);
        sort(cuts.begin(),cuts.end());
        int l=cuts.size();
        vector<vector<int>> dp(l,vector<int>(l,-1));
        return min_cuts(0,l-1,dp,cuts);
}

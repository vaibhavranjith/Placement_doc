
int Solution::minPathSum(vector<vector<int> > &A) {
    vector<vector<int>> dp(A.size()+1,vector<int>(A[0].size()+1,0));
    for(int i=1;i<=A.size();i++) dp[i][1]=dp[i-1][1]+A[i-1][0];
    for(int i=1;i<=A[0].size();i++) dp[1][i]=dp[1][i-1]+A[0][i-1];
    for(int i=2;i<=A.size();i++)
        for(int j=2;j<=A[0].size();j++)
            dp[i][j]=min(A[i-1][j-1]+dp[i-1][j],A[i-1][j-1]+dp[i][j-1]);
    return dp[A.size()][A[0].size()]; 
}

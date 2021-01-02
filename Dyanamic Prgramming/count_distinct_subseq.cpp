int Solution::numDistinct(string A, string B) {
    int m=A.length(),n=B.length();
    if(m<n) return 0;
    
    vector<vector<int>> dp(m+1,vector<int>(n+1,0));
    dp[0][0]=1;
    for(int i=0;i<=m;i++)
        for(int j=0;j<=n;j++)
            if (i == 0) 
                continue;
            else if (j == 0) {
                dp[i][j] = 1; 
                continue;
            }
            else if(A[i-1]==B[j-1])
                dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
            else
                dp[i][j]=dp[i-1][j];
    return dp[m][n];
}

int dp[1006][1006];
int Solution::solve(string A) {
    int n=A.length();
   for(int i=0;i<n;i++)
	    dp[i][i]=1;
    for(int k=2;k<=n;k++)
        for(int i=0;i<n-k+1;i++){
            int j=i+k-1;
            if(A[i]==A[j])
                dp[i][j]=dp[i+1][j-1]+2;
            else
                dp[i][j]=dp[i+1][j]>dp[i][j-1]? dp[i+1][j]:dp[i][j-1];
        }
    return dp[0][n-1];
}

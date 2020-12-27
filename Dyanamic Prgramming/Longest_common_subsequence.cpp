int dp[1007][1007];
int Solution::solve(string A, string B) {
    for(int i=1;i<=A.length();i++)
        for(int j=1;j<=B.length();j++)
            if(A[i-1]==B[j-1])
                dp[i][j]=dp[i-1][j-1]+1;
            else
                dp[i][j]= dp[i-1][j]>dp[i][j-1]?dp[i-1][j]:dp[i][j-1];
    return dp[A.length()][B.length()];
}

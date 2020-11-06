int Solution::minDistance(string A, string B) {
    int dp[453][453];
    for(int i=1;i<=A.length();i++)  dp[0][i]=dp[0][i-1]+1;
    for(int i=1;i<=B.length();i++)  dp[i][0]=dp[i-1][0]+1;
    for(int i=1;i<=B.length();i++)
        for(int j=1;j<=A.length();j++)
            if(A[j-1]!=B[i-1])
                dp[i][j]=min(min(dp[i][j-1],dp[i-1][j-1]),dp[i-1][j])+1;
            else
                dp[i][j]=dp[i-1][j-1];
       
    return dp[B.length()][A.length()];
}

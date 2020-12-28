// | Replace Insert |
// | Delete    X    |
int Solution::minDistance(string A, string B) {
    int dp[453][453];
    for(int i=0;i<A.length();i++) dp[i][0]=i;
    for(int j=0;j<B.length();j++) dp[0][j]=j;
    for(int i=1;i<=B.length();i++)
        for(int j=1;j<=A.length();j++)
            if(A[j-1]!=B[i-1])
                dp[i][j]=min(min(dp[i][j-1],dp[i-1][j-1]),dp[i-1][j])+1;
            else
                dp[i][j]=dp[i-1][j-1];
       
    return dp[B.length()][A.length()];
}

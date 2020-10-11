
int Solution::uniquePaths(int A, int B) {
    vector<vector<int>> dp(A,vector<int>(B,0));
    for(int i=0;i<A;i++){
        for(int j=0;j<B;j++){
            if(i==0 || j==0)
                dp[i][j]=1;
            else
                dp[i][j]=dp[i-1][j] +dp[i][j-1];
        }
    }
    return dp[A-1][B-1];
}

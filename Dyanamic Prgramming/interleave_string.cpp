bool isInterleave(string A, string B, string C) {
        int m=A.length(),n=B.length();
        if(m+n!=C.length())
            return 0;
        vector<vector<bool>> dp(m+1,vector<bool>(n+1,false));
        for(int i=0;i<=m;i++)
            for(int j=0;j<=n;j++)
                if(i==0 and j==0)
                    dp[i][j]=true;
                else if(i==0)
                    dp[i][j]=dp[i][j-1] and B[j-1]==C[i+j-1];
                else if(j==0)
                   dp[i][j]=dp[i-1][j] and A[i-1]==C[i+j-1];
                else
                    dp[i][j] = (dp[i - 1][j] && A[i - 1] == C[i + j - 1]) || (dp[i][j - 1] && B[j-1] == C[i + j - 1] );
        return dp[m][n];
}

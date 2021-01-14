int numSquares(int n) {
        vector<int> sq,dp(n+1,INT_MAX);
        for(int i=sqrt(n);i>=1;i--)
            sq.push_back(i*i);
        dp[0]=0;dp[1]=1;
        for(int i=2;i<=n;i++)
            for(int j=0;j<sq.size();j++)
                if(sq[j]<=i){
                    int nj=dp[i-sq[j]];
                    if(nj!=INT_MAX and nj+1<dp[i])
                        dp[i]=nj+1;
                }         
        return dp[n];    
}

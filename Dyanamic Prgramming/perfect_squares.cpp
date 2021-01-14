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



// Legendre theorem based very fast and uses way less memory: brilliant !!! credits to some leetcode user.

int numSquares(int n) {
        //we will use the  legendre's theorem. The answer will be betwen 1-4. 4 when the number is of the form of : 4a(8b+7).
        //check if n is a perfect  square
        int a =sqrt(n);
        if(a*a==n)
            return 1;
        //check for condition to have 4 numbers
        while(n%4==0)
            n/=4; // This also decreases the search space for the loop below.
        if(n%8==7)
            return 4;
        //check for condition for 2 factors. we can work with this reduced value of n.
        for(int i=1;i*i<=n;i++)
        {
            int y=sqrt(n-(i*i));
            if(y*y==(n-i*i))
                return 2;
        }
        return 3;
    }

// this program counts the number of ways to draw n non--intersecting chords in a circle given 2*n points.

long long int power(long long a,int y,int mod){
    long long int res=1;
    while(y){
        if(y&1)
            res=(res*a)%mod;
        a=(a*a)%mod;
        y=(y>>1);
    }
    return (int)(res%mod);
}


int ncr(int n,int r,int mod){
    long long res=1;
    for(int i=1;i<=r;i++){
        res=(res*(n-i+1))%mod;
        int inv=power(i,mod-2,mod);
        res=(res*inv)%mod;
    }
    return (int)(res%mod);
}

int Solution::chordCnt(int n) {
    int mod=1e9+7;
    long long  d=ncr(2*n,n,mod);
    int inv=power(n+1,mod-2,mod);
    d=(d*inv)%mod;
    return (int)(d%mod);
}

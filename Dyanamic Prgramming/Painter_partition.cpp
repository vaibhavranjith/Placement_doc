//this is an O(n3) solution check for constraints

long suma(vector<int> arr,int start,int end){
    long ret=0;
    for(int i=start;i<end;i++)
        ret+=arr[i];
    return ret;
}
long mini(long a,long b){
    return a<b?  a:b;
}
long maxi(long a,long b){
   return a>b? a:b; 
}
int Solution::paint(int k, int B, vector<int> &C) { 
    int n=C.size();
    if(n==0)
        return 0;
    vector<vector<long>> dp(k+1,vector<long>(n+1,0));
    for(int i=1;i<n+1;i++)
        dp[1][i]=dp[1][i-1]+C[i-1];
    for(int i=1;i<k+1;i++)
        dp[i][1]=C[0]; 
    for(int i=2;i<=k;i++)
        for(int j=2;j<=n;j++){
            long best=INT_MAX;
            for(int p=1;p<=j;p++){
                long part=suma(C,p,j);
                best=mini(best,maxi(dp[i-1][p],part));
            }
            dp[i][j]=best;
        }
    long ret=(dp[k][n]*B)%10000003;
    return ret;
}

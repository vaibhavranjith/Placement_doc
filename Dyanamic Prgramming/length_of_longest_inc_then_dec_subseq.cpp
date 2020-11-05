int dp[2][3003];
int maximum_dp(int n){
    int ret=0;
    for(int i=0;i<n;i++){
        ret = ret>dp[1][i] ? ret : dp[1][i];
        ret=ret >dp[0][i] ? ret : dp[0][i];
    }
    return ret;
}
int Solution::longestSubsequenceLength(const vector<int> &A) {
    if(A.size()==0)
        return 0;
    for(int i=0;i<A.size();i++){
        dp[0][i]=1;
        dp[1][i]=1;
    }
    int j=1;
    while(j<A.size()){
        for(int i=0;i<j;i++){
            if(A[i]<A[j]){
                dp[0][j] = dp[0][i]+1 > dp[0][j] ? dp[0][i]+1 : dp[0][j];
            }
            else if(A[i]>A[j]){
                int temp = dp[1][i]+1 > dp[0][i]+1 ? dp[1][i]+1  :  dp[0][i]+1;
                dp[1][j] = temp > dp[1][j] ? temp : dp[1][j];
            }
            else{
                continue;
            }
        }
        j++;
    }
    return maximum_dp(A.size());
}

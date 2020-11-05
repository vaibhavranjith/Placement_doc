//deep dive in b2b swe https://www.youtube.com/watch?v=fV-TF4OvZpk
int maximum_ele(vector<int> dp,int n){
    int ret=0;
    for(int i=0;i<n;i++)
        ret=dp[i]>ret? dp[i]:ret;
    return ret;
}
int Solution::lis(const vector<int> &A) {
    vector<int> dp(A.size(),1);
    int i=0;
    int j=1;
    while(j<A.size()){
        for(int i=0;i<j;i++){
            if(A[j]>A[i])
                dp[j]=(dp[i]+1)>dp[j]?dp[i]+1:dp[j];
            else
                continue;
        }
        j++;
    }
    return maximum_ele(dp,A.size());
}

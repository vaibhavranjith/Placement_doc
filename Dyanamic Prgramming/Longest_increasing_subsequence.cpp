//deep dive in b2b swe https://www.youtube.com/watch?v=fV-TF4OvZpk
int Solution::lis(const vector<int> &A) {
    vector<int> dp(A.size(),1);
    for(int i=1;i<A.size();i++)
        for(int j=0;j<i;j++)
            if(A[i]>A[j])
                dp[i]=dp[j]+1>dp[i]? dp[j]+1:dp[i];
    return *max_element(dp.begin(),dp.end());
}

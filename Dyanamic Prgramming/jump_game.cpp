int Solution::canJump(vector<int> &arr) {
    vector<bool> dp(arr.size(),false);
    dp[0]=true;
    for(int j=1;j<arr.size();j++)
        for(int i=0;i<j;i++)
            if(dp[i] and i+arr[i]>=j){
                dp[j]=true;
                continue;
            }
    return dp[arr.size()-1];
}

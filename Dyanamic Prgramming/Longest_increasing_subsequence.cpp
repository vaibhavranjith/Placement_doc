int Solution::lis(const vector<int> &A) {
    vector<int> dp(A.size(),1);
    for(int i=1;i<A.size();i++)
        for(int j=0;j<i;j++)
            if(A[i]>A[j])
                dp[i]=dp[j]+1>dp[i]? dp[j]+1:dp[i];
    return *max_element(dp.begin(),dp.end());
}

// Just realised this is a very slow dynamic programming algorithm though intutive... This algorith decreased time from 492ms to 12ms: credits to a leetcoder

int lengthOfLIS(vector<int>& nums) {
        vector<int> dp;
        for(int i = 0; i < nums.size(); i++){
            auto it = lower_bound(dp.begin(),dp.end(),nums[i]);
            if(it == dp.end()) 
                dp.push_back(nums[i]);
            else 
                dp[it-dp.begin()] = nums[i];
        }
        return dp.size();
}

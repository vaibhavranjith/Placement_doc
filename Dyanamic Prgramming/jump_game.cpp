//top down 
int Solution::canJump(vector<int> &arr) {
    int ind=0;
    for(int i=arr.size()-1;i>=0;i--)
        if(ind<=arr[i]+i)
            ind=i;
    return ind==0;
}

//bottom-top approach
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


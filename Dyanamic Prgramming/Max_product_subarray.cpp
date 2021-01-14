int maxProduct(vector<int>& nums) {
        int res=*max_element(nums.begin(),nums.end());
        int curMax=1,curMin=1;
        for(auto n:nums){
            int temp=curMax*n;
            curMax=max(max(curMax*n,n*curMin),n);
            curMin=min(min(temp,n*curMin),n);
            res=max(res,curMax);
        }
        return res;
}

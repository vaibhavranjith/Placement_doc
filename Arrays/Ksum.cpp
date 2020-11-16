//solution from leetcode. 

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        return ksum(nums,target,0,4);
    }
    vector<vector<int>> ksum(vector<int> nums,int target,int start,int k){
        vector<vector<int>> res;
        if(start==nums.size() || nums[start]*k>target || nums[nums.size()-1]*k<target )
           return res;
        if(k==2)
            return twosum(nums,target,start);
        for(int i=start;i<nums.size();i++){
            if(i==start || nums[i-1]!=nums[i])
            for(auto &set:ksum(nums,target-nums[i],i+1,k-1)){
                res.push_back({nums[i]});
                res.back().insert(end(res.back()),begin(set),end(set));
            }
        }
        return res;
    }
    vector<vector<int>> twosum(vector<int>& nums, int target, int start) {
    vector<vector<int>> res;
    int lo = start, hi = nums.size() - 1;
    while (lo < hi) {
        int sum = nums[lo] + nums[hi];
        if (sum < target || (lo > start && nums[lo] == nums[lo - 1]))
            ++lo;
        else if (sum > target || (hi < nums.size() - 1 && nums[hi] == nums[hi + 1]))
            --hi;
        else
            res.push_back({ nums[lo++], nums[hi--]});
    }
    return res;
}
};

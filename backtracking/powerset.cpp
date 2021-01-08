//cascading
vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> pows;
        pows.push_back(vector<int>(0,0));
        for(int i=0;i<nums.size();i++){ 
            vector<vector<int>> arr; 
            for(int j=0;j<pows.size();j++){
                vector<int> temp=pows[j];
                temp.push_back(nums[i]);
                arr.push_back(temp);
            }
            for(int j=0;j<arr.size();j++)
                pows.push_back(arr[j]);
        }
        return pows;
}

//cascading bizarrness: For some reason this code runs faster than the above one. Like I get that this one is not using temproary variables. THe bizarness
// is that when I removed the sorting it still worked but the time increased form 0ms to 4ms.

 vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res(1,vector<int>());
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            int n=res.size();
            for(int j=0;j<n;j++)
            {
                res.push_back(res[j]);
                res.back().push_back(nums[i]);
            }
        }
        return res;
}


//Backtracking
class Solution {
public:
    int k,n;
    vector<vector<int>> output;
    void backtrack(int first,vector<int> &cur,vector<int> nums){
        if(cur.size()==k)
            output.push_back(cur);
        for(int i=first;i<n;i++){
            cur.push_back(nums[i]);
            backtrack(i+1,cur,nums);
            cur.pop_back();
        }
    } 
    vector<vector<int>> subsets(vector<int>& nums) {
          n=nums.size();
          for(k=0;k<n+1;k++){
            vector<int> temp(0,0);
            backtrack(0,temp,nums);
          }
          return output;
    }
};

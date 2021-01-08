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

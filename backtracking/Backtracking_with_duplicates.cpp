void backtrack(vector<int> &cur,vector<vector<int>> &comb,int n,unordered_map<int,int> &count){
        if(cur.size()==n)
            comb.push_back(cur);
        for(auto i=count.begin();i!=count.end();i++){
            int num=i->first;
            int ct=i->second;
            if(ct==0)
                continue;
            cur.push_back(num);
            count[num]=ct-1;
            backtrack(cur,comb,n,count);
            cur.pop_back();
            count[num]=ct;
        }
            
}
vector<vector<int>> permuteUnique(vector<int>& nums) {
        unordered_map<int,int> count;
        for(int i=0;i<nums.size();i++){
            if(count.find(nums[i])==count.end())
                count[nums[i]]=0;
            count[nums[i]]++;
        }
        vector<vector<int>> comb;
        vector<int> cur;
        backtrack(cur,comb,nums.size(),count);
        return comb;
}

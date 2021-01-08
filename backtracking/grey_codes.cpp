vector<int> grayCode(int n) {
        if(n==0) return {};
        vector<int> ans={0,1};
        for(int i=1;ans.size()<pow(2,n);i++)
            if(i &1 ){
                ans.push_back(2*ans[i]+1);
                ans.push_back(2*ans[i]);
            }
            else{
                ans.push_back(2*ans[i]);
                ans.push_back(2*ans[i]+1);
            }
        return ans;
}

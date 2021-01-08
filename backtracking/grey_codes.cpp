// While this is a good observation. If the question was asking for the bit vector instead of the number itself the observation to make is
// that, if :
//      1. L1 represents all the bit patterns, to generate the n vector reverse L1 and let it be L2  
//      2. Append 0 to all patterns in L1 and append 1 to all patterns in L2 now concatenate these vectors.

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

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

// As mentioned: 
arr={0,1};
for (i = 2; i < (1<<n); i = i<<1)
    {
        // Enter the prviously generated codes again in arr[] in reverse
        // order. Nor arr[] has double number of codes.
        for (j = i-1 ; j >= 0 ; j--)
            arr.push_back(arr[j]);
 
        // append 0 to the first half
        for (j = 0 ; j < i ; j++)
            arr[j] = "0" + arr[j];
 
        // append 1 to the second half
        for (j = i ; j < 2*i ; j++)
            arr[j] = "1" + arr[j];
 }

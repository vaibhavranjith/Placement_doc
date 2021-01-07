int Solution::solve(const vector<int> &A) {
    int n=A.size(),ans=1;;
    unordered_map<int,int> m[n];
    for(int i=n-2;i>=0;i--)
        for(int j=n-1;j>=i+1;j--){
            int diff=A[j]-A[i];
            if(m[j].find(diff)==m[j].end())
                m[i][diff]=1;
            else
                m[i][diff]=m[j][diff]+1;
            ans=max(ans,m[i][diff]+1);
        }
    return ans;
}

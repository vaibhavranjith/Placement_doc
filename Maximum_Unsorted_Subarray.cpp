vector<int> Solution::subUnsort(vector<int> &A) {
    vector<int> temp=A;
    sort(temp.begin(),temp.end());
    vector<int> ans{A.size()-1,0};
    for(int i=0;i<A.size();i++){
        if(temp[i]!=A[i]){
            if(ans[0]>i)
                ans[0]=i;
            if(ans[1]<i)
                ans[1]=i;
        }
    }
    if(ans[0]>=ans[1])
        return vector<int>(1,-1);
    return ans;
}

int Solution::majorityElement(const vector<int> &A) {
    int me=A[0];
    int cnt=1;
    for(int i=1;i<A.size();i++){
        if(A[i]!=me){
            cnt--;
            if(cnt==0){
                me=A[i];
                cnt=1;
            }
        }
        else
            cnt++;
    }
    return me;
}

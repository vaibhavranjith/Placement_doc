vector<int> Solution::nextPermutation(vector<int> &A) {
    if(A.size()<=1)
        return A;
    int i=0;
    int pos=-1;
    for(i=A.size()-2;i>0;i--)
        if(A[i]<A[i+1]){
            pos=i;
            break;
        }
    if(pos==-1){
        reverse(A.begin(),A.end());
        return A;
    }
    int mdif=INT_MAX,mpos=-1;
    for(i=pos+1;i<A.size();i++){
        if(A[i]>A[pos] && A[i]-A[pos]<mdif){
            mdif=A[i]-A[pos];
            mpos=i;
        }
    }
    swap(A[pos],A[mpos]);
    reverse(A.begin()+pos+1,A.end());
    return A;
}

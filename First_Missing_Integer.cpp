int Solution::firstMissingPositive(vector<int> &A) {
    int n=A.size();
    for(int i=0;i<A.size();i++){
        if(A[i]>0 and A[i]<=n){
            int pos=A[i]-1;
            if(A[pos]!=A[i]){
                int temp=A[pos];
                A[pos]=A[i];
                A[i]=temp;
                i--;
            }

        }
    }
    for(int i=0;i<A.size();i++){
        if(A[i]!=i+1)
            return i+1;
    }
    return n+1;
}

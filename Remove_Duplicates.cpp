int Solution::removeDuplicates(vector<int> &A) {
    int index=1;
    for(int i=0;i<A.size()-1;i++){
        if(A[i]!=A[i+1]){
            A[index++]=A[i+1];
        }
    }
   return index;
}

int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    long mindif=INT_MAX;
    long bst=INT_MAX;
    int n=A.size();
    for(int k=0;k<n;k++){
        int find=B-A[k];
        int i=0;
        int j=n-1;
        while(i<j){
            if(i==k){
               i++;continue; 
            }
            if(j==k){
                j--;continue;
            }
            long sum=A[i]+A[j];
            if(abs(long(sum+A[k])- (long)B)<mindif){
                mindif=abs(long(sum+A[k])- (long)B);
                bst=sum+A[k];
            }
            if(sum<find){
                i++;
            }
            else if(sum>find){
                j--;
            }
            else{
                break;
            }
       }
    }
    return bst;
}

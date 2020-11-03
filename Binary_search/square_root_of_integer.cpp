
int Solution::sqrt(int A) {
    if(A==0 || A==1)
        return A;
    int ans=0;
    int start=0;
    int end=A;
    long mid;
    while(start<=end){
        mid=(start+end)/2;
        if(mid*mid==A)
            return mid;
        else if(mid*mid<A){
            start=mid+1;
            ans=mid;
        }
        else
            end=mid-1;
            
    }
    return ans;
}

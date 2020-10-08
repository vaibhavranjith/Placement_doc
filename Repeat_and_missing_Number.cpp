vector<int> Solution::repeatedNumber(const vector<int> &A) {
    vector<long> arr(A.size(),0);
    int a,b;
    for(long i=0;i<A.size();i++)
        arr[A[i]-1]++;
    for(long i=0;i<arr.size();i++){
        if(arr[i]==2)
            a=i+1;
        if(arr[i]==0)
            b=i+1;
    }
    return {a,b};
}

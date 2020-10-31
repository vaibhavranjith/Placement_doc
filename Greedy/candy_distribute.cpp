int Solution::candy(vector<int> &A) {
    vector<int> arl(A.size(),1);
    vector<int> arr(A.size(),1);
    for(int i=1;i<A.size();i++){
        if(A[i]>A[i-1])
            arl[i]=arl[i-1]+1;
    }
    for(int i=arr.size()-2;i>=0;i--){
        if(A[i]>A[i+1])
            arr[i]=arr[i+1]+1;
    }
    int sum=0;
    for(int i=0;i<arr.size();i++)
        sum+=max(arr[i],arl[i]);
    return sum;
}

int Solution::firstMissingPositive(vector<int> &A) {
    int n=arr.size();
    for(int i=0;i<n;i++)
        if(arr[i]>0 and arr[i]<n)
            if(arr[i]!=arr[arr[i]-1]){
                swap(arr[i],arr[arr[i]-1]);
                i--;
            }
    for(int i=0;i<n;i++)
        if(arr[i]!=i+1)
            return i+1;
}

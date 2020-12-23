vector<int> Solution::plusOne(vector<int> &arr) {
    int c=0;
    int n=arr.size();
    arr[n-1]=arr[n-1]+1;
    c=arr[n-1]/10;
    arr[n-1]=arr[n-1]%10;
    for(int i=n-2;i>=0;i--)
        if(c==1){
            arr[i]=arr[i]+1;
            c=arr[i]/10;
            arr[i]=arr[i]%10;
        }
    if(c==1)
        arr.insert(arr.begin(),1);
    while(arr[0]==0)arr.erase(arr.begin());
    return arr;
}

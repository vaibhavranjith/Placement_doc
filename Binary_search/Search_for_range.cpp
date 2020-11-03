vector<int>  ans{-1,-1};

void bs(vector<int> arr,int l,int r,int key){
    if(l>r)
        return;
    int mid=(l+r)/2;
    if(arr[mid]==key){
        ans[0]=mid;ans[1]=mid;
        for(int i=mid-1;i>=0;i--){
            if(arr[i]!=key)
                break;
            ans[0]=i;
        }
        for(int i=mid+1;i<arr.size();i++){
            if(arr[i]!=key)
                break;
            ans[1]=i;
        }
        return;
    }
    else if(arr[mid]<key)
        bs(arr,mid+1,r,key);
    else
        bs(arr,l,mid-1,key);
}


vector<int> Solution::searchRange(const vector<int> &A, int B) {
    bs(A,0,A.size()-1,B);
    return ans;
}

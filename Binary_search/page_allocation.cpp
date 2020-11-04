long isPossible(vector<int> arr,int nb,int ns){
    int acc=0;
    int s=1;
    for(int i=0;i<arr.size();i++){
        acc+=arr[i];
        if (arr[i] > nb)
            return false; 
        if(acc>nb){
            s++;
            acc=arr[i];
            if(s>ns)
                return false;
        }
    }
    return true;
}

int Solution::books(vector<int> &A, int B) {
    int end=0;
    for(int i=0;i<A.size();i++)
       end+=A[i]; 
    int start=0;
    long ans=INT_MAX;
    while(start<end){
        int mid=(start+end)/2;
        if(isPossible(A,mid,B)){
            ans=ans<mid? ans:mid;
            end=mid-1;
        }
        else
            start=mid+1;
    }
    return ans;
}

#define MOD 10000003
long isPossible(int t,vector<int> arr){
    long accum=0;
    long p=1;
    for(int i=0;i<arr.size();i++){
        accum+=(long)arr[i];
        if(accum>t){
            p++;
            accum=arr[i];
        }
    }   
    return p;
}
int Solution::paint(int k, int B, vector<int> &arr) { 
    int n=arr.size();
    if(n==1)
        return (arr[0]*B)%10000003;
    long sum=0;
    long max=0;
    for(int i=0;i<arr.size();i++){
        sum+=(long)arr[i];
        if(max<arr[i])
            max=arr[i];
    }
    long start=max;
    long end=sum;
    long mid=(start+end-1)/2;
    long ret=0;
    while(start<end){
        if((start+end)%2==0)
            mid =start + (end-start)/2;
        else
            mid =(start+end-1)/2;
        if(isPossible(mid,arr)<=k){
            ret=mid;
            end=mid-1;
        }
        else
            start=mid+1;
    }
    int ans=((ret%MOD)*(B%MOD))%MOD;
    return ans;
    
}

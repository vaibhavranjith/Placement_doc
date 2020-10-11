
#include <bits/stdc++.h> 
using namespace std;
long long merge(vector<long> &arr,long l,long m,long r){
    long s1=m-l+1;
    long s2=r-m;
    vector<long> L,R;
    for(long i=0;i<s1;i++)
        L.push_back(arr[l+i]);
    for(long j=0;j<s2;j++)
        R.push_back(arr[m+1+j]);
    long long i=0,j=0,k=l;
    long long inv_ct=0;
    while(i<s1 and j<s2){
        if(L[i]<=R[j])
            arr[k++]=L[i++];
        else{
            arr[k++]=R[j++];
            inv_ct+=(s1-i);
        }
    }
    while(i<s1)
        arr[k++]=L[i++];
    while(j<s2)
        arr[k++]=R[j++];
    return inv_ct;
}
long long merge_sort(vector<long> &arr,int beg,int end){
    long long count=0;
    if(beg<end){
        long long mid=(beg+end)/2;
        count+=merge_sort(arr,beg,mid);
        count+=merge_sort(arr,mid+1,end);
        count+=merge(arr,beg,mid,end);
    }  
    return count;
}

long long inv_count(vector<long> &arr){
    return merge_sort(arr,0,arr.size()-1);
}

int main() {
	//code
	int t;
	cin>>t;
	long n;
	for(long i=0;i<t;i++){
	    cin>>n;
	    vector<long> arr;
	    for(int j=0;j<n;j++){
	        int ele;
	        cin>>ele;
	        arr.push_back(ele);
	    }
	    cout<<inv_count(arr)<<"\n";
	    arr.clear();
	}
	return 0;
}

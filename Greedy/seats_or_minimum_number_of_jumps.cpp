#define MOD 10000003
int Solution::seats(string A) {
    int n=A.size();
    int ans=0;
    vector<int> points;
    for(int i=0;i<n;i+=1){
        if(A[i]=='x')
            points.push_back(i);
    }
    if(points.size()==0)
        return 0;
    int ans1=1;
    int median=points.size()/2;
    for(int i=0;i<median;i++){
        ans=(ans+points[median]-points[i]-ans1)%MOD;
        ans1++;
    }
    ans1=1;
    for(int i=median+1;i<points.size();i++){
        ans=(ans+points[i]-points[median]-ans1)%MOD;
        ans1++;
    }
    return ans%MOD;
}

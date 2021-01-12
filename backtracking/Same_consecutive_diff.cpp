void backtrack(int n,vector<int> &ans,int cur,int k){
        if(ndig(cur)==n){
            ans.push_back(cur);
            return;
        }
        int dig=cur%10;
        if(dig+k>=0 and dig+k<=9)
            backtrack(n,ans,cur*10+dig+k,k);
        if(dig-k>=0 and dig-k<=9 and k!=0)
            backtrack(n,ans,cur*10+dig-k,k);  
}
vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> ans;
        for(int i=1;i<=9;i++)
            backtrack(n,ans,i,k);
         return ans;
}
int ndig(int n){
        int c=0;
        while(n>0){n=n/10;c++;}
        return c;
}

int count=0;
void calculate(int N,int pos,vector<bool> &vis){
        if(pos>N)
            count++;
        for(int i=1;i<=N;i++)
            if(!vis[i] && (pos%i==0 || i%pos==0)){
                vis[i]=true;
                calculate(N,pos+1,vis);
                vis[i]=false;
            }
}
int countArrangement(int n) {
        vector<bool> vis(n+1,false);
        calculate(n,1,vis);
        return count;
}

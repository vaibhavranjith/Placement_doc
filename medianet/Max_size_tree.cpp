// https://discuss.codechef.com/t/maximum-size-tree-in-a-forest-query/25159/2
int par[100005],sz[100005];
multiset<int> ms;

void ini(int n){
  for(int i=1;i<=n;i++){
    par[i]=i; 
    sz[i]=1;
    ms.insert(1);
  }
}

int find(int x){
   if(par[x]==x)
      return x;
    return par[x]=find(par[x]);
}

void merge(int a,int b){
  int u=find(a),v=find(b);
  if(u!=v){
    if(sz[v]>sz[u])
       swap(u,v);
    ms.erase(ms.find(sz[u]));
    ms.erase(ms.find(sz[v]));
    ms.insert(sz[u]+sz[v]);
    sz[u]+=sz[v];
    par[v]=u;
  }
}

vector<int> solve(int n,vector<int> &b,vector<int> &c,vector<int> &d>){
  ini(n);
  vector<int> f(n,0);
  for(int i=0;i<n-1;i++
  for(int i=0;i<n-1;i++)
      if(f[i]==0)
         merge(b[i],c[i]);
  

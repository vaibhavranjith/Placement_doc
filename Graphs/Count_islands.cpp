int r[]={-1,-1,-1,0,1,1,1,0};
int c[]={-1,0,1,1,1,0,-1,-1};

void dfs(int nd_r,int nd_c,vector<int> A[],vector<vector<bool>> &vis,int N,int M){
    for(int i=0;i<8;i++){
        int curr=nd_r+r[i];
        int curc=nd_c+c[i];
        if(curr<0 || curc<0 || curr>=N || curc>=M)
            continue;
        else if(A[curr][curc]==1 and !vis[curr][curc]){
            vis[curr][curc]=true;
            dfs(curr,curc,A,vis,N,M);
        }
    }
}

int findIslands(vector<int> A[], int N, int M) {

    // Your code here
    vector<vector<bool>> vis(N,vector<bool>(M,false));
    int count=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(A[i][j]==1 and !vis[i][j]){
                vis[i][j]=true;
                count++;
                dfs(i,j,A,vis,N,M);
            }
        }
    }
    return count;
}

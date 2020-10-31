
int Solution::solve(vector<vector<int> > &A) {
    if(A.size()==0)
        return 0;
    sort(A.begin(),A.end(),[](vector<int> a,vector<int> b)->bool{
        return a[0]<b[0];
    });
    int count=1;
    priority_queue<int,vector<int>,greater<int>> minHeap;
    minHeap.push(A[0][1]);
    for(int i=1;i<A.size();i++){
        if(A[i][0]>=minHeap.top())
            minHeap.pop();
        else
            count++;
        minHeap.push(A[i][1]);
    }
    return count;
    
}

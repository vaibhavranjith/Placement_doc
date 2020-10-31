int Solution::bulbs(vector<int> &A) {
    int find = 0;
    int count=0;
    for(int i=0;i<A.size();i++){
        if(A[i]==find){
            count++;
        if(find==0)
            find =1;
        else
            find = 0;
        }
    }
    return count;
}

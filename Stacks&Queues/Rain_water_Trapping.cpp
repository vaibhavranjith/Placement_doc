int Solution::trap(const vector<int> &A) {
    int area=0;
    vector<int> left(A.size(),0);
    vector<int> right(A.size(),0);
    left[0]=A[0];
    right[A.size()-1]=A[A.size()-1];
    for(int i=1;i<A.size();i++)
        left[i]=max(left[i-1],A[i]);
        
    for(int i=A.size()-2;i>=0;i--)
        right[i]=max(right[i+1],A[i]);
        
    for(int i=0;i<A.size();i++)
        area+=min(left[i],right[i])-A[i];

    return area;
}

// Look at this run to have a better understanding:
//  A:        0   1   0   2   1   0   1   3   2   1   2   1
//  left:     0   1   1   2   2   2   2   3   3   3   3   3
//  right:    3   3   3   3   3   3   3   3   2   2   2   1
//  area:     0   0   1   0   1   2   1   0   0   1   0   0
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

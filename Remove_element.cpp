int Solution::removeElement(vector<int> &A, int B) {
    vector<int> c;
    for(int i=0;i<A.size();i++){
        if(A[i]!=B)
            c.push_back(A[i]);
    }
    A.clear();
    for(int i=0;i<c.size();i++){
        A.push_back(c[i]);
    }
    return c.size();
}

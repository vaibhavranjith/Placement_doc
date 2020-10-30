int Solution::maxp3(vector<int> &A) {
    sort(A.begin(),A.end());
    return max(A[A.size()-1]*A[A.size()-2]*A[A.size()-3],
        A[A.size()-1]*A[0]*A[1]);
}

//O(m+n) solution. don't even think of the binary search O(nlogn) solution;

vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    int i=0,j=0;
    vector<int> ans;
    while(i<A.size() and j<B.size()){
        if(A[i]<B[j])
            i++;
        else if(B[j]<A[i])
            j++;
        else{
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }
    return ans;
}

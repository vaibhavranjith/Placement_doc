int Solution::maxArea(vector<int> &A) {
    int max_area=0,i=0,j=A.size()-1;
    while(i<j)
        if(A[i]<A[j]){
            max_area=max(max_area,A[i]*(j-i));
            i++;
        }
        else{
            max_area=max(max_area,A[j]*(j-i));
            j--;
        }
    return max_area;
}

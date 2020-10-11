int Solution::maxArea(vector<int> &A) {
    int max_area=0;
    int pt1=0;
    int pt2=A.size()-1;
    while(pt1<pt2){
        if(A[pt1]<A[pt2]){
            max_area=max(max_area,A[pt1]*(pt2-pt1));
            pt1++;
        }
        else{
            max_area=max(max_area,A[pt2]*(pt2-pt1));
            pt2--;
        }
    }
    return max_area;
}

//beware this solution will work only if there is atleast one positive value in the array.
int Solution::maxSubArray(const vector<int> &A) {
    int max=INT_MIN;
    int sum=0;
    int th=*min_element(A.begin(),A.end());
    for(int i=0;i<A.size();i++){
        int temp=sum+A[i];
        if(temp<0 and temp>max){
            max=temp;
            sum=0;
        }
        else if(temp<0)
            sum=0;
        else{
            sum+=A[i];
            if(sum>max)
                max=sum;
        }
    }
    return max;
}

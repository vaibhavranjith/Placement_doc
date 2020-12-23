vector<int> Solution::plusOne(vector<int> &A) {
     for(int i=A.size()-1;i>=0;i--){
        int temp=A[i]+1;
        if (temp>=10 && i>0){
            A[i]=0;
            continue;
        }
        else if(temp>=10 && i==0){
            A[i]=0;
            A.insert(A.begin(),1);
            break;
        }
        else{
            A[i]=temp;
            break;
        }
    }
    while(A[0]==0){
        A.erase(A.begin());
    }
    return A;
}

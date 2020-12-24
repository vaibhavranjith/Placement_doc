//Look into moores voting algorith in the greedy folder
int Solution::repeatedNumber(const vector<int> &A) {
    if(A.size()==0)
        return -1;
    else if(A.size()==1)
        return A[0];
    int th=A.size()/3;    
    int me1=A[0];
    int me2=A[1];
    int ct1=0;
    int ct2=0;
    for(int i=0;i<A.size();i++){
        if(me1==A[i])
            ct1++;
        else if(me2==A[i])
            ct2++;
        else if(ct1==0){
            me1=A[i];
            ct1++;
        }
        else if(ct2==0){
            me2=A[i];
            ct2++; 
        }
        else{
            ct1--;
            ct2--;
        }
    }
    ct1=0;ct2=0;
    for(int i=0;i<A.size();i++){
       if(A[i]==me1)
            ct1++;
    }
    for(int j=0;j<A.size();j++){
        if(A[j]==me2)
            ct2++;
    }
    if(ct1>th)
        return me1;
    else if(ct2>th)
        return me2;
    return -1;
    
}

int Solution::trailingZeroes(int A) {
    int eq=1;
    int p=1;
    int count=0;
    while(1){
        if(floor(A/pow(5,p))==0)
            break;
        count+=floor(A/pow(5,p));
        p++;
    }
    return count;
}

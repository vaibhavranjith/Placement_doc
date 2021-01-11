 vector<int> sequentialDigits(int low, int high) {
        vector<int> seq;
        int dig=1,n,i,j;
        for(i=1;i<=9;i++){
            int cur=i;
            n=1;
            for(j=i+1;j<=9 and n<=dig;j++){
                cur=cur*10+j;
                n++;
            }
            if(i==9-dig){
                dig++;
                i=0;
            }
            if(cur>=low and cur <=high)
                seq.push_back(cur);
            if(cur==123456789)
                break; 
        }
        return seq;
}

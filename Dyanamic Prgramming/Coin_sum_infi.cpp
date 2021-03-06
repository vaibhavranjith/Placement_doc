// explanation on this chat :   https://www.hackerrank.com/challenges/ctci-coin-change/forum
// permalink to the comment:    https://www.hackerrank.com/challenges/ctci-coin-change/forum/comments/211697
int Solution::coinchange2(vector<int> &A, int B) {
    vector<int> table(B+1,0);
    table[0]=1;
    for(int i=0;i<A.size();i++)
        for(int j=A[i];j<=B;j++)
            table[j]+=table[j-A[i]]%1000007;
    return table[B]%1000007;
}

// find the sum of factors for each element including 1 and itself.

//method1: based on formula sum of factors=(1+ p1^1+ p1^2+ ... + p1^a1)*(1+ p2^1+ p2^2+ ... + p2^a2)...
int sumofFactors(int n) { 
    int res = 1; 
    for (int i = 2; i <= sqrt(n); i++) {
        int curr_sum = 1; 
        int curr_term = 1; 
        while (n % i == 0) { 
            n = n / i; //we are reducing the limit here 
            curr_term *= i; 
            curr_sum += curr_term; 
        } 
        res *= curr_sum; 
    } 
    if (n >= 2) 
        res *= (1 + n);       // if the number is a prime.
    return res; 
} 
//method 2: This is the answer!

int main(){
    int q;
    cin>>q;
    vector<long long int> sieve(1000001);
    sieve[1]=1;
    for(int i=2;i<seive.size();i++)
        sieve[i]=1+i;
    for(long long int i=2;i*i<=1000000;i++){
        seive[i*i]+=i;
        for(long long j=i*i+i;j<1000000;j+=i){
            sieve[i]+=i;
            sieve[i]+=j/i;
        }
    }
    while(q--){
        int x;
        cin>>x;
        cout<<sieve[x]<<endl;
    }
    return 0;
}

CombinationIterator(string characters, int combinationLength) {
        s=characters;
        n=combinationLength;
        prev="";
        hasNext();
}
string next() {
        if(prev == ""){
            prev = s.substr(0, n);
            return prev;
        }
        int count = 1, i = prev.size() - 1, j = s.size() - 1;
        while(prev[i--] == s[j--]) ++count;
        prev = prev.substr(0, n - count) + s.substr(s.find(prev[n - count]) + 1, count);
        return prev;
}  
bool hasNext() {
       int count = 0, i = prev.size() - 1, j = s.size() - 1;
       cout<<i<<" "<<j;
       while(prev[i--] == s[j--]) 
           ++count;
       if(count == n) return false;
      return true;
}

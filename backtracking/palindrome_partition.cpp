void backtrack(int first,vector<string> &l,vector<vector<string>> &ans,string s){
        if(first>=s.length())
            ans.push_back(l);
        for(int end=first;end<s.length();end++)
            if(isPalindrome(s,first,end)){
                l.push_back(s.substr(first,end-first+1));
                backtrack(end+1,l,ans,s);
                l.pop_back();
            }
}
vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> l;
        backtrack(0,l,ans,s);
        return ans;
}
bool isPalindrome(string &s,int low,int high){
        while(low<high)
            if(s[low++]!=s[high--]) return false;
        return true;
}

void backtrack(vector<string> &ans,string &s,string &cur,int ind){
        if(ind==s.length()){
            ans.push_back(cur);
            return;
        }
        if(s[ind]>='a' and s[ind]<='z'){
            cur.push_back(toupper(s[ind]));
            backtrack(ans,s,cur,ind+1);
            cur.pop_back();
        }
        if(s[ind]>='A' and s[ind]<='Z'){
            cur.push_back(tolower(s[ind]));
            backtrack(ans,s,cur,ind+1);
            cur.pop_back();
        }
        cur.push_back(s[ind]);
        backtrack(ans,s,cur,ind+1);
        cur.pop_back();
}
vector<string> letterCasePermutation(string S) {
        vector<string> ans;
        string cur="";
        backtrack(ans,S,cur,0);
        return ans;
}

bool isMatch(string s, string p) {
        vector<vector<bool>> memo(32,vector<bool>(32,false));
        memo[s.length()][p.length()]=true;
        
        for(int i=s.length();i>=0;i--){
            for(int j=p.length()-1;j>=0;j--){
                bool fm=(i < s.length() and (p[j]==s[i] or p[j]=='.'));
                if(j+1<p.length() and p[j+1]=='*')
                    memo[i][j] = (memo[i][j+2] or (fm and memo[i+1][j]));
                else 
                    memo[i][j]= (fm and memo[i+1][j+1]);
            }
        }
        return memo[0][0];
}

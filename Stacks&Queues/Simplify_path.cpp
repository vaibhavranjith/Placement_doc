class Solution {
public:
    string simplifyPath(string path) {
        vector<string> simp; 
        istringstream ss(path);
        string token;
        while(getline(ss,token,'/')){
            if(token=="" || token==".")
                continue;
            else if(token!="..")
                simp.emplace_back(token);
            else if(!simp.empty())
                simp.pop_back();
        }
        string res="";
        for(auto& i:simp)res+=("/"+i);
        if(simp.empty())
            return "/";
        return res;
    }
};

//https://leetcode.com/problems/restore-ip-addresses/
//https://www.geeksforgeeks.org/program-generate-possible-valid-ip-addresses-given-string/
 bool isValid(string check){
        vector<string> ip;
        string e="";
        for(int i=0;i<check.length();i++)
            if(check[i]=='.'){
                ip.push_back(e);
                e="";
            }
            else
                e=e+check[i];
        ip.push_back(e);
        for(int i=0;i<ip.size();i++){
            int val=stoi(ip[i]);
            if(ip[i].size()>3 || val<0 || val>255)
                return false;
            if(ip[i].size()>1 and val==0)
                return false;
            if(ip[i].size()>1 and val!=0 and ip[i][0]=='0')
                return false;
        }
        return true;
    }
    vector<string> restoreIpAddresses(string ip) {
        string check=ip;
        vector<string> ans;
        int l=ip.length();
        if(l<3 || l>12)
            return ans;
        for(int i=1;i<l-2;i++){
            for(int j=i+1;j<l-1;j++){
                for(int k=j+1;k<l;k++){
                    check=check.substr(0,k)+"."+check.substr(k,l-k+2);
                    check=check.substr(0,j)+"."+check.substr(j,l-j+3);
                    check=check.substr(0,i)+"."+check.substr(i,l-i+4);
                    if(isValid(check))
                        ans.push_back(check);
                    check=ip;
                }
            }
        }
        return ans;
    }

//credits to a leetcoder

class Solution {
public:
    vector<string> ans;
    int n;
    void gen(vector<string> &v,int i,string &s)
    {if(v.size()>4)
        return;
        if(i==n)
        {
            if(v.size()==4)
            {
                string t;
                t=v[0]+"."+v[1]+"."+v[2]+"."+v[3];
                ans.push_back(t);
            }
        }
        for(int j=1;j<=3;j++)
        {
            if(i+j<=n)
            {string u=s.substr(i,j);
             if(u[0]=='0' && u.size()>1)
                 break;
                if(stoll(u)<=255)
            { v.push_back(u);
                gen(v,i+j,s);
                v.pop_back();
            }
             if(u=="0")
                 break;
            }
        }
    }
    vector<string> restoreIpAddresses(string s) {
        ans.clear();
        n=s.size();
        vector<string> v;
        gen(v,0,s);
        return ans;
    }
};

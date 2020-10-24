class Solution {
public:
    string decodeString(string s) {
        stack<int> counts;
        stack<string> result;
        string res="";
        long count=0,i=0;
        
        while(i<s.size()){
            if(isdigit(s[i])){
                long count=0;
                while(isdigit(s[i])){
                    count=(count*10 + s[i]-'0');
                    i++;
                }
                counts.push(count);
            }
            else if(s[i]=='['){
                result.push(res);
                res="";
                i++;
            }
            else if(s[i]==']'){
                string temp=result.top();
                result.pop();
                long limit=counts.top();
                for(long j=0;j<limit;j++){
                    temp.append(res);
                }
                counts.pop();
                res=temp;
                i++;
            }
            else{
                res.append(1,s[i]);
                i++;
            }     
        }
        return res;
    }
};

bool ispar(string x)
{
    unordered_map<char,bool> mp={
        {'(',true},
        {'{',true},
        {'[',true},
        {')',false},
        {']',false},
        {'}',false}
    };
    unordered_map<char,char> mp1={
        {'}','{'},
        {')','('},
        {']','['}
    };
    stack<char> pen;
    for(int i=0;i<x.size();i++)
        if(mp[x[i]])
            pen.push(x[i]);
        else{
            if(!pen.empty() and pen.top()==mp1[x[i]]){
                pen.pop();
                continue;
            }
            return false;
        }
    return pen.empty() ? true:false;
}

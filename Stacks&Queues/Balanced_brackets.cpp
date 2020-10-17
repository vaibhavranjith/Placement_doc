#include <iostream>
#include <bits/stdc++.h> 
using namespace std;


bool balanced(string brack){
    unordered_map<char,bool> mp={
    {'{',true},
    {'[',true},
    {'(',true},
    {'}',false},
    {']',false},
    {')',false}
    };
    unordered_map<char,char> mp2={
    {'}','{'},
    {')','('},
    {']','['}
    };
    stack<char> pen;
    for(int i=0;i<brack.size();i++){
        if(mp[brack[i]])
            pen.push(brack[i]);
        else{
            if(pen.empty())
                return false;
            else{
                if(pen.top()==mp2[brack[i]]){
                    pen.pop();
                    continue;
                }
                return false;
            }
        }
    }
    if(!pen.empty())
        return false;
    return true;
 
}
int main() {
	//code
	string in;
    int t=0;
    cin>>t;
    while(t-->0){
        cin>>in;
        if(balanced(in))
            cout<<"balanced\n";
        else
            cout<<"not balanced\n";
    }
	return 0;
}

/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/
stack<pair<int,int>> min_cache;
/*returns min element from stack*/
int _stack :: getMin()
{
    if(s.empty())
        return -1;
    int ret=min_cache.top().first;
    return ret;
}

/*returns poped element from stack*/
int _stack ::pop()
{
    if(s.empty())
        return -1;
    min_cache.top().second--;
    if(min_cache.top().second==0)
        min_cache.pop();
    int ret=s.top();
    s.pop();
    return ret;

}

/*push element x into the stack*/
void _stack::push(int x)
{
    if(s.empty()){
        min_cache.push(make_pair(x,1));
        s.push(x);
        return;
    }
    if( x==min_cache.top().first){
        min_cache.top().second++;
        s.push(x);
        return;
    }
    else if(x<min_cache.top().first){
        min_cache.push(make_pair(x,1));
        s.push(x);
        return;
    }else{
        min_cache.top().second++;
        s.push(x);
        return;
    }
}

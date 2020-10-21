vector<int> Solution::prevSmaller(vector<int> &A) {
    vector<int> g;
    stack<int> st;
    for(int i=0;i<A.size();i++){
        if(st.empty())
            g.push_back(-1);
        else{
            while(!st.empty() and st.top()>=A[i])
                st.pop();
            if(st.empty())
                g.push_back(-1);
            else
                g.push_back(st.top());
        }
        st.push(A[i]);
    }
    return g;
}

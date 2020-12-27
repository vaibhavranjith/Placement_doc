vector<int> Solution::slidingMaximum(const vector<int> &arr, int k) {
    int n=arr.size();
    deque<int> q(k);
    int i=0;
    for(i=0;i<k;i++){
        while(!q.empty() and arr[i]>=arr[q.back()])
            q.pop_back();
        q.push_back(i);
    }
    vector<int> ret;
    for(;i<n;i++){
        ret.push_back(arr[q.front()]);
        while(!q.empty() and q.front()<=i-k)
            q.pop_front();
        while(!q.empty() and arr[i]>=arr[q.back()])
            q.pop_back();
        q.push_back(i);
    }
    ret.push_back(arr[q.front()]);
    return ret;
}


vector<int> Solution::slidingMaximum(const vector<int> &arr, int k) {
    int n=arr.size();
    std::deque<int> Qi(k); 
    int i; 
    for (i = 0; i < k; ++i) { 
        while ((!Qi.empty()) && arr[i] >= arr[Qi.back()]) 
            Qi.pop_back(); 
        Qi.push_back(i); 
    } 
    vector<int> ret;
    for (; i < n; ++i) { 
        ret.push_back(arr[Qi.front()]);
        while ((!Qi.empty()) && Qi.front() <= i - k) 
            Qi.pop_front();
        while ((!Qi.empty()) && arr[i] >= arr[Qi.back()]) 
            Qi.pop_back(); 
        Qi.push_back(i); 
    } 
    ret.push_back(arr[Qi.front()]);
    return ret;
}


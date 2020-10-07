int Solution::maximumGap(const vector<int> &A) {
    vector<pair<int,int>> mp;
    for(int i=0;i<A.size();i++)
        mp.push_back(make_pair(A[i],i));
    sort(mp.begin(),mp.end());
    int max=0;
    int min=mp[0].second;
    for(int i=1;i<A.size();i++){
        if(mp[i].second<min)
            min=mp[i].second;
        if(mp[i].second-min>max)
            max=mp[i].second-min;
    }
    return max;
}

//This was hard for me

vector<Interval> Solution::insert(vector<Interval> &v, Interval i) {
    vector<Interval> ans;
    int n=v.size();
    int start=i.start,end=i.end;
    bool check=false;
    for(int i=0;i<n;i++){
        if(v[i].end<start)
            ans.push_back(v[i]);
        else if(v[i].start>end){
            if(!check)
                ans.push_back({start,end});
            ans.push_back(v[i]);
            check=true;
        }
        else{
            start=min(start,v[i].start);
            end=max(end,v[i].end);
        }
    }
    if(!check){
        ans.push_back({start,end});
    }
    return ans;
}

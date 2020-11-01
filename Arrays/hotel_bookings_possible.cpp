//Make a timeline using a vector of pairs marking the arrival and departure as 1 and 0. Sort this vector and move along it
// If ever you come around a point where the number of guest is more than K return false
bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
   vector<pair<int,int>> tline;
   for(int i=0;i<arrive.size();i++){
       tline.push_back(make_pair(arrive[i],1));
       tline.push_back(make_pair(depart[i],0));
   }
   sort(tline.begin(),tline.end());
   int curr_active=0;
   for(int i=0;i<tline.size();i++)
       if(tline[i].second==1){
           curr_active+=1;
           if(curr_active>K)
               return false;
       }
       else
        curr_active-=1;
   return true;
}

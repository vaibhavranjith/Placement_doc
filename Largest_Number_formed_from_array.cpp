int myCompare(string x,string y){
    string xy=x.append(y);
    string yx=y.append(x);
    return xy.compare(yx)>0 ?1 :0;
}

class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	string printLargest(vector<string> &arr) {
	       sort(arr.begin(),arr.end(),myCompare);
	       string ans;
	       for(int i=0;i<arr.size();i++){
	           ans=ans.append(arr[i]);
	       }
	       return ans;
	}
};

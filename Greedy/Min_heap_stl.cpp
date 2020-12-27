#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<queue>
using namespace std; 
int main(){
	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > q;
	q.push({10,1});
	q.push({5,1});
	q.push({4,1});
	q.push({1,1});
	q.push({11,1});
	while(!q.empty()){
		cout<<q.top().first<<" ";
		q.pop();
	}
	return 0; 
}

//output: 1 4 5 10 11

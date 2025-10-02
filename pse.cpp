#include<bits/stdc++.h>
using namespace std;


vector<int> prev_ele(vector<int> arr){
	vector<int> ans(arr.size(),-1);
	stack<int> s;

	for(int i=0;i<arr.size();i++){

		while(!s.empty() && s.top()>=arr[i]){
		s.pop();
		}
		if(!s.empty()){
			ans[i]=s.top();
		}
		s.push(arr[i]);
	}
	return ans;
}

int main(){
	vector<int> arr={1,6,2};
	vector<int> ans = prev_ele(arr);
	for(int val : ans){
		cout<<val<<" ";
	}
	return 0;
}

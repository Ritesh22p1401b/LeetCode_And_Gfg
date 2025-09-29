#include<bits/stdc++.h>
using namespace std;


vector<int> next_ele(vector<int> arr){
	vector<int> ans(arr.size(),0);
	stack<int> s;
	for(int i=arr.size()-1;i>-1;i--){
		while(!s.empty() && s.top()<=arr[i]){
			s.pop();
		}
		if(s.empty()){
			ans[i]=-1;
		}else{
			ans[i]=s.top();
		}
		s.push(arr[i]);
	}
	return ans;
}


int main(){
	int n;cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	vector<int> ans = next_ele(arr);
	for(int val : ans){
		cout<<val<<" ";
	}
	return 0;
}

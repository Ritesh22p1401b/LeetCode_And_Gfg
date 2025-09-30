#include<bits/stdc++.h>
using namespace std;

void toh(int n,int src,int dest , int temp){
	if(n==1){
		cout<<src<<" "<<dest<<endl;
		return; 
	}
	toh(n-1,src,temp,dest);
	cout<<src<<" "<<dest<<endl;
	toh(n-1,temp,dest,src);
}

int main(){
	int num;cin>>num;
	long long count = pow(2,num)-1;
	cout<<count<<endl;
	toh(num,1,3,2);
	return 0;
}


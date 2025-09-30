#include<bits/stdc++.h>
using namespace std;

void all_subset(vector<int> &arr, vector<int> &ans, int i){
    if(i==arr.size()){
        for(int vals : ans){
            cout<<vals;
        }
        return;
    }

    ans.push_back(arr[i]);   // include
    all_subset(arr,ans,i+1);

    ans.pop_back(); //backtracking
    all_subset(arr,ans,i+1); //exclude
}

int main(){
    vector<int> arr = {1,2,3};
    vector<int> ans;
    all_subset(arr,ans,0);
    return 0;
}

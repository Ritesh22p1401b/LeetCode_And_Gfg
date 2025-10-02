#include<bits/stdc++.h>
using namespace std;

#define f first //element
#define s second //index

vector<int> nge(vector<int> &arr) {
    vector<int> ans(arr.size(),-1);
    stack<pair<int,int>> s;
    int temp=-1;
    for (int i=0;i<arr.size();i++) {
        while (!s.empty() && arr[i]>s.top().f) {
            ans[s.top().s]=arr[i];
            s.pop();
        }
        if (s.empty()) {
            s.push({arr[i],i});
        }temp=arr[i];
        if (temp<=s.top().f) {
            s.push({temp,i});
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {20,18 ,8 ,17 ,20 ,20 ,7 ,2 ,9 ,10 ,2 ,11 ,20 ,8};
    vector<int>ans=nge(arr);
    for (int val : ans) {
        cout << val << " ";
    }
}
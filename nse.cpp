#include<bits/stdc++.h>
using namespace std;

#define f first //element
#define s second //index

vector<int> nse(vector<int> arr) {
    vector<int> ans(arr.size(),-1);
    stack<pair<int,int>> s;
    int temp=-1;
    for (int i=0;i<arr.size();i++) {
        while (!s.empty() && arr[i]<s.top().f) {
            ans[s.top().s]=arr[i];
            s.pop();
        }
        if (s.empty()) {
            s.push({arr[i],i});
        }temp=arr[i];
        if (temp>=s.top().f) {
            s.push({temp,i});
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {8,8,2,2,4,9,1,1,5,10};
    vector<int>ans=nse(arr);
    for (int val : ans) {
        cout << val << " ";
    }
}
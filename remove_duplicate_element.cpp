#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int>nums;
    nums={0,0,1,1,1,2,2,3,3,4};
    int l=1;
    for(int r=1;r<nums.size();r++){
        if(nums[r-1]!=nums[r]){
            nums[l]=nums[r];
            l++;
        }
    }
    cout<<l<<endl;
    return 0;
}

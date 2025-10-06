#include<bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int right,left=0;
    for(int right=0;right<nums.size();right++){
        if(nums[right]!=val){
            nums[left]=nums[right];
            left++;
        }
    }
    return left;
}

int main(){
    vector<int> nums={3,2,2,3};
    int val=3;
    int ans;
    ans=removeElement(nums,val);
    cout<<ans<<endl;
}

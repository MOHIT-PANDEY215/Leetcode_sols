#include<bits/stdc++.h>

using namespace std;

int searchInsert(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1,mid;
        while(i<=j){
            mid=(i+j)/2;
            if(nums[mid]>target)
            j=mid-1;
            else if(nums[mid]<target)
            i=mid+1;
            else return mid;
        }
        if(target<nums[0])
        return 0;
        else if(target<nums[mid])
        return mid;
        return mid+1;
    }

int main(){
    vector<int> nums;
    int target,n;
    cin>>n>>target;
    for(int i=0;i<n;++i){
        int a;
        cin>>a;
        nums.push_back(a);
    }

    int ans=searchInsert(nums,target);
    cout<<ans<<" ";

    return 0;
}
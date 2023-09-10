#include<bits/stdc++.h>
using namespace std;

//binary search function

int search(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(nums[mid]>target)
            j=mid-1;
            else if(nums[mid]<target)
            i=mid+1;
            else return mid;
        }
        return -1;
    }

int main(){

    vector<int> nums;
    int n,target;
    cin>>n>>target;
    for(int i=0;i<n;++i){
        int a;
        cin>>a;
        nums.push_back(a);
    }
    cout<<search(nums,target);

    return 0;
}
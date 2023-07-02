#include<bits/stdc++.h>

using namespace std;

void sortColors(vector<int>& nums) {
        int low=0,mid=0,high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
            swap(nums[low++],nums[mid++]);
            }
            else if (nums[mid]==2)
            swap(nums[high--],nums[mid]);
            else mid++;
        }
    }

int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;++i){
        int a;
        cin>>a;
        nums.push_back(a);
    }
    sortColors(nums);
    for(int i=0;i<n;++i){
        cout<<nums[i]<<" ";
    }
    return 0;
}
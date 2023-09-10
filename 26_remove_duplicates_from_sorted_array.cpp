#include<bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int>& nums) {
        int count=0;
        for(int i=nums.size()-2;i>=0;--i){
            if(nums[i]==nums[i+1]){
                count++;
            nums[i+1]=INT32_MAX;
            }
        }
        sort(nums.begin(),nums.end());
        return nums.size()-count;
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
    cout<<removeDuplicates(nums)<<endl;
    return 0;
}
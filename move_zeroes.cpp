#include<bits/stdc++.h>

using namespace std;

 void moveZeroes(vector<int>& nums) {
            int count=0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==0){
                auto it=nums.begin()+i;
                nums.erase(it);
                count++;
                i--;
            }
            }
            for(int i=0;i<count;++i){
                nums.push_back(0);
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
    moveZeroes(nums);
    for(int i=0;i<n;++i){
        cout<<nums[i]<<" ";
    }
    return 0;
}
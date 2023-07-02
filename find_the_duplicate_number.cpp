#include<bits/stdc++.h>

using namespace std;

int findDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto x:mp){
            if(x.second>1) return x.first;
        }
        return 0;
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
    cout<<findDuplicate(nums)<<endl;

    return 0;
}
#include<bits/stdc++.h>

using namespace std;

// Approach 1
vector<int> twoSum(vector<int> &nums,int target){
     map<int,int> sol;
        for(int i=0;i<nums.size();++i){
            if(sol.find(target-nums[i])!=sol.end()) {
            return {sol[target-nums[i]],i};
            }
            else{
            sol[nums[i]]=i;
            }
        }
        
        return {-1,-1};
}

int main(){
    vector<int> vec;
    int n,target;
    cin>>n;
    for(int i=0;i<n;++i){
        int a;
        cin>>a;
        vec.push_back(a);
    }
    // Approach 2
    vector<int> ans;
    for(int i=0;i<n-1;++i){
        for(int j=i+1;j<n;++j){
            if(vec[i]+vec[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
    }
    cout<<ans[0]<<" "<<ans[1];

    return 0;
}
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vec;
    int n,target;
    cin>>n;
    for(int i=0;i<n;++i){
        int a;
        cin>>a;
        vec.push_back(a);
    }
    pair<int,int> ans;
    for(int i=0;i<n-1;++i){
        for(int j=i+1;j<n;++j){
            if(vec[i]+vec[j]==target){
                ans.insert({i,j});
                break;
            }
        }
    }
    cout<<ans.first<<" "<<ans.second;

    return 0;
}
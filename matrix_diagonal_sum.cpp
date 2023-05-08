#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<vector<int>>mat;
    for(int i=0;i<3;++i){
        vector<int> flag;
        for(int j=0;j<3;++j){
            int a;
            cin>>a;
            flag.push_back(a);
        }
        mat.push_back(flag);
    }
    int sum=0;
        for(int i=0;i<mat.size();++i){
            for(int j=0;j<mat[i].size();++j){
                if(i==j||i+j==mat[0].size()-1)
                {sum+=mat[i][j];
                }
            }
        }
        cout<<sum<<" ";

    return 0;
}
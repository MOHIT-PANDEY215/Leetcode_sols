#include<bits/stdc++.h>

using namespace std;

void solve(vector<string> &ans,string s,int open,int close ){
        if(open==0&&close==0){
            ans.push_back(s);
            return;
        }

        if(open==close){
            s.push_back('(');
            solve(ans,s,open-1,close);
        }

        else if(open==0){
            s.push_back(')');
            solve(ans,s,open,close-1);
        }
        else if(close==0){
            s.push_back('(');
            solve(ans,s,open-1,close);
        }
        else{
            s.push_back('(');
            solve(ans,s,open-1,close);
            s.pop_back();
            s.push_back(')');
            solve(ans,s,open,close-1);
        }
    }

int main(){
    int n;
    cin>>n;
    int no_of_open=n,no_of_close=n;
    string s="";
    vector<string> ans;
    solve(ans,s,no_of_open,no_of_close);
    for(auto a:ans){
        cout<<a<<" ";
    }

    return 0;
}
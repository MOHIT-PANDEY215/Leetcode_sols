#include<bits/stdc++.h>

using namespace std;


// Approach 1(without dp)  ---> O(N) TC
int maxProfit1(vector<int>& prices) {
        int ans=0;
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i+1]>prices[i]) ans=ans+(prices[i+1]-prices[i]);
        }
        return ans;
    }

//Approach 2(with dp)
int sol(vector<vector<int>> dp,vector<int> prices, int index,int buy,int n){
        if(index==n) return 0;
        if(dp[index][buy]!=-1) return dp[index][buy];
        int profit=0;
        if(buy){
             profit=max(-prices[index]+sol(dp,prices,index+1,0,n),
                            sol(dp,prices,index+1,1,n));
        }
        else{
             profit=max(prices[index]+sol(dp,prices,index+1,1,n),
                            sol(dp,prices,index+1,0,n));
        }
        return dp[index][buy]=profit;
    }

int maxProfit2(vector<int>& prices){
    int n=prices.size();
        vector<vector<int>> dp(n+1,vector<int>(2,-1));
        return sol(dp,prices,0,1,n);
}

int main(){
    int n;
    cin>>n;
    vector<int> prices;
    for(int i=0;i<n;++i){
        int a;
        cin>>a;
        prices.push_back(a);
    }
    cout<<maxProfit1(prices)<<endl;  // Approach 1
    //cout<<maxProfit2(prices)<<endl;  // Approach 2

}
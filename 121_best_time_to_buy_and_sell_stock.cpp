#include<bits/stdc++.h>

using namespace std;

int maxProfit(vector<int>& prices) {
        int minPrice=INT_MAX,maxPrice=0;
        for(auto x: prices){
            minPrice=min(x,minPrice);
            maxPrice=max(maxPrice,x-minPrice);
        }
        return maxPrice;
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
    cout<<maxProfit(prices)<<endl;
    return 0;
}
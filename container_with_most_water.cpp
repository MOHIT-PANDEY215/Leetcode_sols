#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> heights;
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int height;
        cin>>height;
        heights.push_back(height);
    }
    int a=0,b=heights.size()-1,area=0;
        while(a<=b){
            int width=abs(a-b);
            int h=min(heights[a],heights[b]);
            area=max(width*h,area);
            if(heights[a]<=heights[b])
            a++;
            else b--;
        }

        cout<<area<<" ";

        return 0;
}
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> st;
        for(auto x:nums){
            if(x>0){
                st.insert(x);
            }
        }
        int i=1;
        for(auto x:st){
            if(x!=i){
                return i;
            }
            i++;
        }
        return i;
    }
};
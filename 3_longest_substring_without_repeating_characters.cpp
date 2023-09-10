class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0)
        return 0;
        int j=0,i=0,len=1;
        set<char> st;
        while(j<s.length()){
          if(st.count(s[j])==0){
            st.insert(s[j]);
            len=max(len,(int)st.size());
            j++;
          }
          else{
            st.erase(s[i]);
            i++;
          }
        }
        return len;
    }
};
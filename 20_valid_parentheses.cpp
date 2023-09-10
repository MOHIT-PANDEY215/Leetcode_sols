class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(auto x:s){
            if(st.empty()){
                if(x=='('||x=='{'||x=='[')
                st.push(x);
                else return false;
            }
            else{
                if(x=='('||x=='{'||x=='['){
                    st.push(x);
                }
                else{
                    if((st.top()=='('&&x==')')||(st.top()=='{'&&x=='}')||(st.top()=='['&&x==']')){
                        st.pop();
                    }
                    else return false;
                }
            }
        }
        if(st.empty())
        return true;
        return false;
    }
};
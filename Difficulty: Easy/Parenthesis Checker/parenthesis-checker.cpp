class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else if(s[i]==')' || s[i]=='}' || s[i]==']'){
                if(st.empty()){
                    return false;
                }
                if((s[i]==')' && st.top()=='(') || (s[i]==']' && st.top()=='[') ||
                (s[i]=='}' && st.top()=='{')){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty()) return true;
        return false;
    }
};
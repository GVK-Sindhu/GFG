class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<int>st;
        for(char c:s){
            if(c=='[' || c=='{' || c=='('){
                st.push(c);
            }
            else{ 
                if(st.empty()){
                    return false;
                }
               if(!st.empty() && (c==']' && st.top()=='[') || (c=='}' && st.top()=='{')||
                (c==')'&& st.top()=='(')){
                        st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
    }
};
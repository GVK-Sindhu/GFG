class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<char>st;
        unordered_map<char,char>maps{{')','('},{'}','{'},{']','['}};
        for(char c:s){
            if(c=='(' || c=='{' || c=='['){
                st.push(c);
            }
            else{
                if(st.empty()){
                    return false;
                }
                    if(st.top()!=maps[c]){
                        return false;
                    }
                
                else{
                    st.pop();
                }
            }
        }
        return st.empty();
    }
};
class Solution {
  public:
    string removeKdig(string &s, int k) {
        // code here
        stack<char>st;
        for(char c:s){
            while(!st.empty() && k>0 && st.top()>c){
                st.pop();
                k--;
            }
            st.push(c);
        }
        while(!st.empty() && k>0){
            st.pop();
            k--;
        }
        string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        int idx=res.size();
        for(int i=0;i<res.size();i++){
            if(res[i]!='0'){
                idx=i;
                break;
            }
        }
        res=res.substr(idx);
        if(res.empty()){
            res="0";
        }
        return res;
    }
};
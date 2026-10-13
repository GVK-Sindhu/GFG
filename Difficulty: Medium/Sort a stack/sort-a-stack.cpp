class Solution {
  public:
    
    void sortStack(stack<int> &st) {
        // code here
       stack<int>tmp;
       while(!st.empty()){
           int ele=st.top();
           st.pop();
           while(!tmp.empty() && tmp.top()<ele){
                st.push(tmp.top());
                tmp.pop();
            }
            tmp.push(ele);
       }
       while(!tmp.empty()){
           st.push(tmp.top());
           tmp.pop();
       }
    }
};

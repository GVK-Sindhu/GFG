class Solution {
  public:
    void sortStack(stack<int> &st) {
        // code here
        vector<int>res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        sort(res.begin(),res.end(),greater<int>());
        for(int i=res.size()-1;i>=0;i--){
            st.push(res[i]);
        }
    }
};

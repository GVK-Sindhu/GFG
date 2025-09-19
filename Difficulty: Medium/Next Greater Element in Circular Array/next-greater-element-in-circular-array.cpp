class Solution {
  public:
    vector<int> nextGreater(vector<int> &arr) {
        // code here
        int n=arr.size();
        stack<int>st;
        vector<int>res(n,-1);
        for(int i=2*n-1;i>=0;i--){
            while(!st.empty() && st.top()<=arr[i%n]){
                st.pop();
            }
            if(i<n && !st.empty()){
                res[i%n]=st.top();
            }
            st.push(arr[i%n]);
        }
        return res;
    }
};
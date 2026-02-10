class Solution {
  public:
    vector<int> nextFreqGreater(vector<int>& arr) {
        // code here
        unordered_map<int,int>freq;
        int n=arr.size();
        stack<int>st;
        vector<int>res(n,-1);
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        
        for(int i=0;i<n;i++){
            while(!st.empty() && freq[arr[i]]>freq[arr[st.top()]]){
                res[st.top()]=arr[i];
                st.pop();
            }
            st.push(i);
        }
        return res;
    }
};

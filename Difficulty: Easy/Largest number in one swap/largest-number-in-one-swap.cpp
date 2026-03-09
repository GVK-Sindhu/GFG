class Solution {
  public:
    string largestSwap(string &s) {
        // code here
        int n=s.size();
        vector<int>last(10);
        for(int i=0;i<s.size();i++){
            last[s[i]-'0']=i;
        }
        for(int i=0;i<n;i++){
            for(int j=9;j>s[i]-'0';j--){
                if(last[j]>i){
                    swap(s[i],s[last[j]]);
                    return s;
                }
            }
        }
        return s;
    }
};
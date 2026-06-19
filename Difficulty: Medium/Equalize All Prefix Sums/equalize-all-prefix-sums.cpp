class Solution {
  public:
    vector<int> optimalArray(vector<int> &arr) {
        // code here
        vector<int>res;
        int op=0;
        for(int i=0;i<arr.size();i++){
            int median=i/2;
            op+=(arr[i]-arr[i/2]);
            res.push_back(op);
        }
        return res;
    }
};
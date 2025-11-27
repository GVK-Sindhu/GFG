class Solution {
  public:
    int subsetXORSum(vector<int>& arr) {
        // code here
        int res=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            res|=arr[i];
        }
        return res*(1<<(n-1));
    }
};
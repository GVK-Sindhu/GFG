class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int maxs=0;
        int n=arr.size();
        for(int i=0;i<k;i++){
            maxs+=arr[i];
        }
        int curs=maxs;
        for(int i=k;i<n;i++){
            curs+=arr[i];
            curs-=arr[i-k];
            maxs=max(maxs,curs);
        }
        return maxs;
    }
};
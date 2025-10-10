class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int s=0,maxs=0;
        int n=arr.size();
        for(int i=0;i<k;i++){
            s+=arr[i];
        }
        maxs=s;
        for(int i=k;i<n;i++){
            s+=arr[i]-arr[i-k];
            maxs=max(maxs,s);
        }
        return maxs;
        
    }
};
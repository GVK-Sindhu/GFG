class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        // code here
        int maxxor=0,n=arr.size();
        for(int i=0;i<k;i++){
            maxxor^=arr[i];
        }
        int curxor=maxxor;
        for(int i=k;i<n;i++){
            curxor^=arr[i];
            curxor^=arr[i-k];
            maxxor=max(maxxor,curxor);
        }
        return maxxor;
    }
};
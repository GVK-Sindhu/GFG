class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int>lmax(n);
        vector<int>rmax(n);
        lmax[0]=arr[0];
        for(int i=1;i<n;i++){
            lmax[i]=max(lmax[i-1],arr[i]);
        }
        rmax[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            rmax[i]=max(rmax[i+1],arr[i]);
        }
        int res=0;
        for(int i=0;i<n;i++){
            res+=min(lmax[i],rmax[i])-arr[i];
        }
        return res;
    }
};
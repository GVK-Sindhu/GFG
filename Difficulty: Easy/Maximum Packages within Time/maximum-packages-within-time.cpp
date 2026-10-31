class Solution {
  public:
    int maxPackages(vector<int>& arr, int tt) {
        // code here
        int n=arr.size(),s=0,maxs=0;
        for(int i=0;i<n;i++){
            s+=arr[i];
            if(i>=(tt-1)){
                if((i-tt)>=0){ s-=arr[i-tt]; }
                maxs=max(maxs,s);
            }
        }
        return maxs==0?s:maxs;
    }
};
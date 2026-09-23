class Solution {
  public:
    int formPyramid(vector<int>& arr) {
        int n=arr.size();
        int ts=0;
        for(int it:arr){
            ts+=it;
        }
        vector<int>left(n),right(n);
        left[0]=1;
        for(int i=1;i<n;i++){
            left[i]=min(arr[i],left[i-1]+1);
        }
        right[n-1]=1;
        for(int i=n-2;i>=0;i--){
            right[i]=min(arr[i],right[i+1]+1);
        }
        int maxs=0;
        for(int i=0;i<n;i++){
            int peak=min(left[i],right[i]);
            maxs=max(maxs,peak*peak);
        }
        return ts-maxs;
    }
};
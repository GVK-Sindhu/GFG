class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int l=0,r=0,zc=0,maxlen=0;
        while(r<n){
            if(arr[r]==0){
                zc++;
            }
            while(zc>k){
               if(arr[l]==0){
                   zc--;
               }
               l++;
            }
            maxlen=max(maxlen,(r-l+1));
            r++;
        }
        return maxlen;
    }
};

// Final function implementation
class Solution {
  public:
    int minSwap(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int ws=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=k){
                ws++;
            }
        }
        if(ws==0) return 0;
        int c=0;
        for(int i=0;i<ws;i++){
            if(arr[i]<=k){
                c++;
            }
        }
        int maxs=c;
        for(int i=ws;i<n;i++){
            if(arr[i-ws]<=k){
                c--;
            }
            if(arr[i]<=k){
                c++;
            }
            maxs=max(maxs,c);
        }
        return ws-maxs;
    }
};

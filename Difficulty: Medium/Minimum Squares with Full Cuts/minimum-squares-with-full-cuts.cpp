class Solution {
  public:
    int minSquares(int n, int m) {
        // code here
        int ans=0;
        while(n>0 || m>0){
            if(m==1){
                ans+=n;
                return ans;
            }
            if(n==1){
                ans+=m;
                return ans;
            }
            int maxi=max(n,m);
            int mini=min(n,m);
            if(maxi==mini){
                ans++;
                return ans;
            }
            m=mini;
            n=maxi-mini;
            ans++;
        }
        return ans;
    }
};
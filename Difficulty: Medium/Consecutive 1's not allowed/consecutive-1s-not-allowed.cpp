class Solution {
  public:
    int dp[45][2];
    int solve(int idx,int n,int prev){
        int c=0;
        if(idx==n) return 1;
        if(dp[idx][prev]!=-1){
            return dp[idx][prev];
        }
        c+=solve(idx+1,n,0);
        if(prev==0){
            c+=solve(idx+1,n,1);
        }
        return dp[idx][prev]=c;
    }
    int countStrings(int n) {
        // code here
        memset(dp,-1,sizeof(dp));
        return solve(0,n,0);
    }
};
class Solution {
  public:
    int solve(int n,vector<int>&dp){
        if(n==0 || n==1){ //cant divide further
            return 0;
        }
        if(dp[n]!=-1) return dp[n];
        int maxpro=1;
        for(int i=1;i<n;i++){
            int dirpro=i*(n-i);
            int mulpro=i*solve(n-i,dp);
            maxpro=max(maxpro,max(dirpro,mulpro));
        }
        return dp[n]=maxpro;
    }
    int maxProduct(int n) {
        vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
};
class Solution {
  public:
    int solve(int i,vector<int>& val, vector<int>& wt, int w,vector<vector<int>>&dp){
        if(i==0){
            if(wt[i]<=w){
                return val[i]*(w/wt[i]);
            }
            else{
                return 0;
            }
        }
        if(dp[i][w]!=-1){
            return dp[i][w];
        }
        int nt=solve(i-1,val,wt,w,dp);
        int t=0;
        if(wt[i]<=w) t=val[i]+solve(i,val,wt,w-wt[i],dp);
        return dp[i][w]=max(nt,t);
    }
    int knapSack(vector<int>& val, vector<int>& wt, int w) {
        // code here
        int n=val.size();
        vector<vector<int>>dp(n,vector<int>(w+1,-1));
        return solve(n-1,val,wt,w,dp);
    }
};
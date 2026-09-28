class Solution {
    public int minimumCost(int x, int s, int m, int l, int cs, int cm, int cl) {
        // code here
        int limit=x+l;
        int[] dp=new int[limit+1];
        int INF=(int)1e9;
        Arrays.fill(dp,INF);
        dp[0]=0;
        int minres=INF;
        for(int i=0;i<limit+1;i++){
            if(dp[i]==INF){
                continue;
            }
            if(i+s<=limit){
                dp[i+s]=Math.min(dp[i+s],dp[i]+cs);
            }
            if(i+m<=limit){
                dp[i+m]=Math.min(dp[i+m],dp[i]+cm);
            }
            if(i+l<=limit){
                dp[i+l]=Math.min(dp[i+l],dp[i]+cl);
            }
            if(i>=x){
                minres=Math.min(minres,dp[i]);
            }
        }
        return minres;
    }
}
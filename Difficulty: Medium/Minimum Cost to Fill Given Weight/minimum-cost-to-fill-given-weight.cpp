class Solution {
  public:
      const int INF = 1e9;

    int solve(int i, int w, vector<int>& cost,
              vector<vector<int>>& dp) {

        int n = cost.size();

        if (w == 0) return 0;
        if (i == n) return INF;

        if (dp[i][w] != -1) return dp[i][w];

        int notTake = solve(i + 1, w, cost, dp);

        int take = INF;
        if (cost[i] != -1 && (i + 1) <= w) {
            take = cost[i] +
                   solve(i, w - (i + 1), cost, dp);
        }

        return dp[i][w] = min(take, notTake);
    }
    int minimumCost(vector<int> &cost, int w) {
         int n = cost.size();

        vector<vector<int>> dp(n, vector<int>(w + 1, -1));

        int ans = solve(0, w, cost, dp);

        return (ans >= INF) ? -1 : ans;
    }
};

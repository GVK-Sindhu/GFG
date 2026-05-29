class Solution {
  public:
    int solve(int i,int prvs,string &s,vector<vector<int>>&dp){
        int n=s.size();
        if(i==n){
            return 1;
        }
        int res=0;
        int curs=0;
        if(dp[i][prvs]!=-1){
            return dp[i][prvs];
        }
        for(int j=i;j<n;j++){
            curs+=s[j]-'0';
            if(curs>=prvs){
                res+=solve(j+1,curs,s,dp);
            }
        }
        return dp[i][prvs]=res;
        
    }
    int validGroups(string &s) {
        // code here
        vector<vector<int>>dp(s.size()+1,vector<int>(901,-1));
        return solve(0,0,s,dp);
        
    }
};


// 112 ->2^n-1 = 2^(3-1) =2^2=4

// 1,1,2
// 1,12
// 11,2
// 112

// 1119-> 2^(n-1)=2^(4-1)=2^3=8 1|1|1|9 ->3 gaps

// 1,119
// 1,11,9
// 1,1,1,9
// 11,1,9
// 11,19
// 1,1,19
// 111,9
// 1119



class Solution {
  public:
    
    void solve(int i,vector<int>& arr,long long prod,bool take,long long &ans){
        if(i<0)
        {
            if(take){
                ans=max(ans,prod);
            }
            return ;
        }
        solve(i-1,arr,prod*arr[i],true,ans);
        solve(i-1,arr,prod,take,ans);
    }
    
    int findMaxProduct(vector<int>& arr) {
        // code here
        // int n=arr.size();
        // long long ans=LLONG_MIN;
        // solve(n-1,arr,1,false,ans);
        
        // return (int)ans;
        
        const long long MOD = 1000000007;

        int n = arr.size();

        if(n == 1)
            return arr[0];

        int negCnt = 0, zeroCnt = 0;
        int maxNeg = INT_MIN;

        for(int x : arr){
            if(x == 0)
                zeroCnt++;
            else if(x < 0){
                negCnt++;
                maxNeg = max(maxNeg, x);
            }
        }

        if(zeroCnt == n)
            return 0;

        if(negCnt == 1 && negCnt + zeroCnt == n)
            return 0;

        long long prod = 1;
        bool removed = false;

        for(int x : arr){

            if(x == 0)
                continue;

            if(negCnt % 2 == 1 && x == maxNeg && !removed){
                removed = true;
                continue;
            }

            long long val = ((long long)x % MOD + MOD) % MOD;
            prod = (prod * val) % MOD;
        }

        return (int)prod;
    }
};

class Solution {
  public:
      const int mod=1e9+7;
    int maxAmount(vector<int>& arr, int k) {
        // code here
        long long res=0;
        priority_queue<int>pq;
        for(int it:arr){
            pq.push(it);
        }
        while(k--){
         int tmp=pq.top();
          if(tmp<=0) break;
          res=(res+tmp)%mod;
          pq.pop();
          pq.push(tmp-1);
        }
        return res;
    }
};
class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        int res=0;
        unordered_map<int,int>freq;
        int prefixxor=0;
        for(int it:arr){
            prefixxor^=it;
            res=res+freq[prefixxor^k];
            if(prefixxor==k){
                res++;
            }
            freq[prefixxor]++;
        }
        return res;
        
    }
};
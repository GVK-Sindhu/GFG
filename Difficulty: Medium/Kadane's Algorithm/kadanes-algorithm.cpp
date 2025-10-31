class Solution {
  public:
    int maxSubarraySum(vector<int> &a) {
        // Code here
       int maxs=a[0],s=0;
       for(int it:a){
           s+=it;
           maxs=max(maxs,s);
           if(s<0){
               s=0;
           }
       }
       return maxs;
    }
};
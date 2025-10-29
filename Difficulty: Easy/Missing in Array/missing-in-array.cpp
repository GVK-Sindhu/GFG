class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n=arr.size()+1;
        int totals=0,s=0;
        for(int i=1;i<=n;i++){
            totals+=i;
        }
        for(int it:arr){
            s+=it;
        }
        return totals-s;
    }
};
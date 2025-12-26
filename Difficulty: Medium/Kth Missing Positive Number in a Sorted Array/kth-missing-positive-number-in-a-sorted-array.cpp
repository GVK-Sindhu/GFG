class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // code here
        unordered_map<int,int>freq;
        for(auto it:arr){
            freq[it]++;
        }
        int c=0;
        for(int i=1;i<=1000001;i++){
            if(freq[i]==0){
                c++;
            }
            if(c==k){
                return i;
            }
        }
        return 1000001;
    }
};
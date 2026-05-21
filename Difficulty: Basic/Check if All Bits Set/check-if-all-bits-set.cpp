class Solution {
  public:
    bool isBitSet(int n) {
        // code here
        vector<int>bin;
        if(n==0){
            return false;
        }
        while(n>0){
            bin.push_back(n%2);
            n/=2;
        }
        for(int it:bin){
            if(it==0){
                return false;
            }
        }
        return true;
    }
};
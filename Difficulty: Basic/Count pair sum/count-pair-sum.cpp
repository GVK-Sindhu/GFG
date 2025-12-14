
class Solution {
  public:
    int countPairs(vector<int>& arr1, vector<int>& arr2, int x) {
        // code here.
        unordered_map<int,int>tar;
        for(int it:arr1){
            tar[x-it]=it;
        }
        int c=0;
        for(int it:arr2){
            int req=x-it;
            if(tar[it]){
                c++;
            }
            
        }
        return c;
    }
};
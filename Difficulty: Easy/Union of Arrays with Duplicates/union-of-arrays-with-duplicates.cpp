class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        set<int>s1;
        for(int it:a){
            s1.insert(it);
        }
        for(int it:b){
            s1.insert(it);
        }
        vector<int>res;
        for(int it:s1){
            res.push_back(it);
        }r
        return res;
    }
};
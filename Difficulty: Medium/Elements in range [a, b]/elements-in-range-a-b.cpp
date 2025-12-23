class Solution {
  public:
    vector<int> cntInRange(vector<int> &arr, vector<vector<int>> &queries) {
        // code here
        sort(arr.begin(),arr.end());
        vector<int>res;
        for(auto it:queries){
            auto lower=lower_bound(arr.begin(),arr.end(),it[0]);
            auto upper=upper_bound(arr.begin(),arr.end(),it[1]);
            int lowidx=(lower-arr.begin());
            int uppidx=(upper-arr.begin());
            res.push_back(uppidx-lowidx);
        }
        return res;
    }
};
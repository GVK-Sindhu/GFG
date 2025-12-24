class Solution {
  public:
    vector<int> countXInRange(vector<int>& arr, vector<vector<int>>& queries) {
        // code here
        vector<int>res;
        for(auto it:queries){
            auto it1=lower_bound(arr.begin()+it[0],arr.begin()+it[1]+1,it[2]);
            int st=it1-arr.begin();
            auto it2=upper_bound(arr.begin()+it[0],arr.begin()+it[1]+1,it[2]);
            int ed=it2-arr.begin();
            // cout<<*it2<<" ";
            // cout<<ed<<" "<<st<<" ";
            int result=ed-st;
            res.push_back(result);
        }
        return res;
    }
};
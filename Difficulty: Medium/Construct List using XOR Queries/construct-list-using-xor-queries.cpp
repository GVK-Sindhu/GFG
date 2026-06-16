class Solution {
  public:
    vector<int> constructList(vector<vector<int>> &queries) {
        // code here
        int cxor=0;
        vector<int>res;
        int n=queries.size();
        for(int i=n-1;i>=0;i--){
            if(queries[i][0]==0){
                res.push_back(queries[i][1]^cxor);
            }
            else{
                cxor^=queries[i][1];
            }
        }
        res.push_back(cxor);
        sort(res.begin(),res.end());
        return res
        ;
    }
};

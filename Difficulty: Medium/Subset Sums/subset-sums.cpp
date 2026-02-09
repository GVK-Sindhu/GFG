class Solution {
  public:
    void fun(vector<int>&arr,vector<int>&res,int idx,int s){
        if(idx>=arr.size()){
            res.push_back(s);
            return;
        }
        fun(arr,res,idx+1,s+arr[idx]);
        fun(arr,res,idx+1,s);
    }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int>res;
        int idx=0,s=0;
        fun(arr,res,idx,s);
        sort(res.begin(),res.end());
        return res;
    }
};
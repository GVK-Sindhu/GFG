class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here
        vector<int>res;
        unordered_map<int,int>mp;
        int c=0;
        for(int i=0;i<k;i++){
            mp[arr[i]]++;
            if(mp[arr[i]]==1){
                c++;
            }
        }
        res.push_back(c);
        for(int i=k;i<arr.size();i++){
            if(mp[arr[i]]==0){
                c++;
            }
            mp[arr[i]]++;
            mp[arr[i-k]]--;
            if(mp[arr[i-k]]==0){
                c--;
            }
            res.push_back(c);
        }
        return res;
    }
};
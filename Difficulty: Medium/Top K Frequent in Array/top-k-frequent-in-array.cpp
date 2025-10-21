class Solution {
  public:
    vector<int> topKFreq(vector<int> &arr, int k) {
        // Code here
        unordered_map<int,int>freq;
        for(int it:arr){
            freq[it]++;
        }
        vector<pair<int,int>>res;
        for(auto it:freq){
            res.push_back({it.second,it.first});
        }
        sort(res.begin(),res.end(),[](pair<int,int>&a,pair<int,int>&b){
            if(a.first==b.first){
                return a.second>b.second;
            }
            return a.first>b.first;
        });
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(res[i].second);
        }
        return ans;
    }
};


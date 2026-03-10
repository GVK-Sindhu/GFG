class Solution {
  public:
    static bool cmp(pair<int,int>&a,pair<int,int>&b){
        if(a.second==b.second){
            return a.first>b.first;
        }
        return a.second>b.second;
    }
    vector<int> topKFreq(vector<int> &arr, int k) {
        // Code here
        unordered_map<int,int>mp;
        for(int it:arr){
            mp[it]++;
        }
        vector<pair<int,int>>freq;
        for(auto it:mp){
            freq.push_back({it.first,it.second});
        }
        sort(freq.begin(),freq.end(),cmp);
        vector<int>res;
        for(int i=0;i<k;i++){
            res.push_back(freq[i].first);
        }
        return res;
    }
};

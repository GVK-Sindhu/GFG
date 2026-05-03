class Solution {
  public:
    int bitcount(int n){
        int c=0;
        while(n>0){
            n=n&(n-1);
            c++;
        }
        return c;
    }
    vector<int> sortBySetBitCount(vector<int>& arr) {
        // code here
        vector<pair<int,int>>freq;
        for(int i=0;i<arr.size();i++){
            int res=bitcount(arr[i]);
            freq.push_back({res,i});
        }
        sort(freq.begin(),freq.end(),[](pair<int,int>a,pair<int,int>b){
            if(a.first==b.first){
                return a.second<b.second;
            }
            return a.first>b.first;
        });
        vector<int>ans;
        for(auto it:freq){
            ans.push_back(arr[it.second]);
        }
        return ans;
    }
};
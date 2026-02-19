class Solution {
  public:
    vector<int> missinRange(vector<int>& arr, int low, int high) {
        // code here
        unordered_map<int,int>freq;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        vector<int>res;
        for(int i=low;i<=high;i++){
            if(freq[i]==0){
                res.push_back(i);
            }
        }
        return res;
    }
};
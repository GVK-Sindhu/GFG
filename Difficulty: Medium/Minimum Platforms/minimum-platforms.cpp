class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
        int n=arr.size();
        vector<int>prefix(2401,0);
        for(int i=0;i<arr.size();i++){
            prefix[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            prefix[dep[i]+1]--;
        }
        int maxi=0;
        int st=prefix[0];
        for(int i=1;i<prefix.size();i++){
            st+=prefix[i];
            maxi=max(maxi,st);
        }
        return maxi;
    }
};

class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        vector<int>pref(arr.size());
        pref[0]=arr[0];
        for(int i=1;i<arr.size();i++){
            pref[i]=pref[i-1]+arr[i];
        }
        int n=arr.size();
        for(int i=0;i<arr.size()-1;i++){
            if((pref[n-1]-pref[i])==pref[i]){
                return true;
            }
        }
        return false;
    }
};

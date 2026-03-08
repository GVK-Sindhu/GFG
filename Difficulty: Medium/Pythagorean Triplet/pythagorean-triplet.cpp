class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        // code here
        int n=arr.size();
        unordered_set<int>pref(n);
        for(int i=0;i<n;i++){
            pref.insert(arr[i]*arr[i]);
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int sum=(arr[i]*arr[i])+(arr[j]*arr[j]);
                if(pref.find(sum)!=pref.end()){
                    return true;
                }
            }
        }
        return false;
    }
};
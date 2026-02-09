class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int n=arr.size();
        int pref=1,suff=1;
        int maxres=INT_MIN;
        for(int i=0;i<n;i++){
            if(pref==0) pref=1;
            pref*=arr[i];
            if(suff==0) suff=1;
            suff*=arr[n-i-1];
            maxres=max(maxres,max(pref,suff));
        }
        return maxres;
    }
};
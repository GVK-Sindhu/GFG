class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int n=arr.size();
        vector<int>pref(n);
        pref[0]=arr[0];
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]+arr[i];
        }
        int l=0,r=0,s=0;
        vector<int>res;
        while(r<n){
            s+=arr[r];
            while(s>target){
                s-=arr[l];
                l++;
            }
            
            if(s==target){
                res.push_back(l+1);
                res.push_back(r+1);
                break;
            }
            r++;
        }
        if(res.empty()) res.push_back(-1);
        return res;
    }
};
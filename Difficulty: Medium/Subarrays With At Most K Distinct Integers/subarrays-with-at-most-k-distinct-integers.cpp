class Solution {
  public:
    int countAtMostK(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        vector<int>freq(100001,0);
        int l=0,r=0,c=0,res=0;
        while(r<n){
            freq[arr[r]]++;
            if(freq[arr[r]]==1){
                c++;
            }
            // cout<<c<<" ";
            while(c>k){
                freq[arr[l]]--;
                if(freq[arr[l]]==0){
                    c--;
                }
                l++;
            }
            if(c<=k){
                res+=(r-l+1); 
                // cout<<l<<" ";
                // cout<<l<<" "<<r<<" ";
            }
            
            r++;
        }
        return res;
    }
};
class Solution {
  public:
    int sumDiffPairs(vector<int>& arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        vector<int>res;
        int i=n-1;
        int j=n-2;
        while(i>=0 && j>=0){
            if(arr[i]-arr[j]<k){
                res.push_back(arr[i]);
                res.push_back(arr[j]);
                i-=2;
                j-=2;
            }
            else{
                i--;
                if(i==j){
                    j--;
                }
            }
        }
        int s=0;
        for(int it:res){
            s+=it;
        }
        return s;
    }
};
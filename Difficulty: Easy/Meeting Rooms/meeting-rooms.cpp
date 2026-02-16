class Solution {
  public:
    bool canAttend(vector<vector<int>> &arr) {
        // Code Here
        int n=arr.size(),c=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;i++){
            if(arr[i+1][0]<arr[i][1]){
                return false;
            }
        }
        return true;
    }
};
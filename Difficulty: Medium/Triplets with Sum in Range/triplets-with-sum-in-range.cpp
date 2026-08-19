class Solution {
  public:
  int solve(vector<int>&arr,int val,int n){
    //   this function used to return count of triplets that are less than or equal to val
    int res=0;
    for(int i=0;i<n-2;i++){
        int j=i+1,k=n-1;
        while(j<k){
            int s=arr[i]+arr[j]+arr[k];
            if(s>val){
                k--;
            }
            else{
                res+=(k-j);
                j++;
            }
        }
    }
    return res;
  }
  int countTriplets(vector<int> &arr, int l, int r) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        return solve(arr,r,n)-solve(arr,l-1,n);
    }
};
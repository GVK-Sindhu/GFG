class Solution {
  public:
    int find(vector<int>& arr) {
        // code here
        int newx=0;
        for(int i=arr.size()-1;i>=0;i--){
            newx=(newx+arr[i]+1)/2;
        }
        return newx;
    }
};

// instead of thinking from left think from backward
// if X>arr[i] x+=(x-arr[i]) else x-=(arr[i]-x) both are same actualyy i.e 2x-arr[i]
// only changing by value of 2*x-arr[i] so newx can be computed as
// newx=2*oldx-arr[i] but we have many possibilties for oldx so we go from backward
// then oldx=newx+arr[i]/2 
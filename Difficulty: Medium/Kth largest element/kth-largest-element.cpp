class Solution {
  public:
    // Function to return kth largest element from an array.
    int KthLargest(vector<int> &arr, int k) {
        // Your code here
        // priority_queue<int,vector<int>,greater<int>>pq;
        // for(int i=0;i<arr.size();i++){
        //     pq.push(arr[i]);
        //     if(pq.size()>k){
        //         pq.pop();
        //     }
        // }
        // return pq.top();
        sort(arr.begin(),arr.end(),greater<int>());
        return arr[k-1];
    }
};
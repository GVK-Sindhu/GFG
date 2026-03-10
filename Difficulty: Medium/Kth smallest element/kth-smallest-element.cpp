class Solution {
  public:
    int kthSmallest(vector<int>& arr, int k) {
        // code here
        priority_queue<int>pq(arr.begin(),arr.begin()+k);
        for(int i=k;i<arr.size();i++){
            if(pq.top()>arr[i]){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        return pq.top();
    }
};

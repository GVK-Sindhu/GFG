class Solution {
  public:
    void solve(queue<int>&q){
       if(q.empty()) return;
       int frontele=q.front();
       q.pop();
       solve(q);
       q.push(frontele);
    }
    void reverseQueue(queue<int> &q) {
        // code here
        solve(q);
    }
};
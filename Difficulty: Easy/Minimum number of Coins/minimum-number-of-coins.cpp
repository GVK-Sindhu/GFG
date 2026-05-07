class Solution {
  public:
    int findMin(int n) {
        // code here
        int cnt=0;
        vector<int>demon={1,2,5,10};
        for(int i=demon.size()-1;i>=0;i--){
            cnt+=n/demon[i];
            n=n%demon[i];
        }
        return cnt;
    }
};
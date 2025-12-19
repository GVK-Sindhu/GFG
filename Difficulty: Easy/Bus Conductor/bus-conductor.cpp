class Solution {
  public:
    int findMoves(vector<int>& chairs, vector<int>& passengers) {
        // code here
        int n=chairs.size();
        sort(chairs.begin(),chairs.end());
        sort(passengers.begin(),passengers.end());
        int res=0;
        for(int i=0;i<n;i++){
            if(chairs[i]!=passengers[i]){
              res+=abs(chairs[i]-passengers[i]);  
            }
        }
        return res;
    }
};
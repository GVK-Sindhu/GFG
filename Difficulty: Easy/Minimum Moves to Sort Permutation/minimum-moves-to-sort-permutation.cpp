class Solution {
  public:
    int minMoves(vector<int>& arr) {
        // code here
        // longest increasing consecutive subsequence
        int n=arr.size();
        vector<int>pos(n+1);
        for(int i=0;i<n;i++){
            pos[arr[i]]=i;
        }
        int c=1,maxi=1;
        for(int i=2;i<=n;i++){
            if(pos[i-1]<pos[i]){
                c++;
            }
            else{
                c=1;
            }
            maxi=max(maxi,c);
        }
        return n-maxi;
    }
};
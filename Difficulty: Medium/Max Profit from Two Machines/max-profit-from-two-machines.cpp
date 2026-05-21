class Solution {
  public:
    int maxProfit(int x, int y, vector<int> &a, vector<int> &b) {
        // code here
        int n=a.size();
        vector<int>idx(n);
        for(int i=0;i<n;i++){
            idx[i]=i;
        }
        sort(idx.begin(),idx.end(),[&](int i,int j){
            return abs(a[i]-b[i])>abs(a[j]-b[j]);
        });
        int res=0;
        for(int it:idx){
            if((a[it]>=b[it] && x>0) || y==0){
                res+=a[it];
                x--;
            }
            else{
                res+=b[it];
                y--;
            }
        }
        return res;
    }
};
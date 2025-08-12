class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        // Code here
         vector<int>res;
         sort(prices.begin(),prices.end());
         int i=0;
         int j=prices.size()-1;
         int min=0;
         int max=0;
         while(i<=j){
             min+=prices[i];
             i++;
             j-=k;
         }
         int x=0,y=prices.size()-1;
         while(x<=y){
             max+=prices[y];
             x+=k;
             y-=1;
         }
         res.push_back(min);
         res.push_back(max);
        return res;
    }
};
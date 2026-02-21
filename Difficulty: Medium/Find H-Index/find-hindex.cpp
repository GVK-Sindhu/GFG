class Solution {
  public:
    bool solve(int mid,vector<int>& citations){
        int c=0;
        for(int it:citations){
            if(it>=mid){
                c++;
            }
        }
        return c>=mid;
    }
    int hIndex(vector<int>& citations) {
        // code here
        int n=citations.size();
        sort(citations.begin(),citations.end());
        int l=0,h=n;
        int res=0;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(solve(mid,citations)){
                res=mid;
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return res;
    }
};
class Solution {
  public:
    int assignHole(vector<int>& a, vector<int>& b) {
        // code here
        vector<int>res;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<a.size();i++){
            int tmp=abs(a[i]-b[i]);
            res.push_back(tmp);
        }
        int max=INT_MIN;
        for(int it:res){
            if(it>max){
                max=it;
            }
        }
        return max;
        
    } 
};
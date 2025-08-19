class Solution {
  public:
    int hIndex(vector<int>& citations) {
        // code here
        int n=citations.size();
        vector<int>freq(n+1,0);
        for(int it:citations){
            if(it>n){
                freq[n]++;
            }
            else{
                freq[it]++;
            }
        }
        int count=0;
        for(int i=n;i>=0;i--){
            count+=freq[i];
            if(count>=i){
                return i;
            }
        }
        return 0;
    }
};



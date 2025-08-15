class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        vector<int>res(2);
        int n=arr.size();
        vector<int>freq(n+1,0);
        for(int it:arr){
            freq[it]++;
        }
        for(int i=1;i<freq.size();i++){
            if(freq[i]==2){
                res[0]=i;
                // res.push_back(i);
            }
            else if(freq[i]==0){
                res[1]=i;
                // res.push_back(i);
            }
        }
        return res;
    }
};
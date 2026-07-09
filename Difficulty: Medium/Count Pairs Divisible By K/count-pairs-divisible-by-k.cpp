class Solution {
  public:
    int countKdivPairs(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int>freq;
        int c=0;
        for(int i=0;i<arr.size();i++){
            int tmp=arr[i]%k;
            if(freq.find((k-tmp)%k)!=freq.end()){
                c+=freq[(k-tmp)%k];
            }
            freq[tmp]++;
        }
        return c;
    }
};
class Solution {
  public:
    bool checkElements(int start, int end, vector<int> &arr) {
        // code here
        unordered_map<int,int>freq;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        for(int i=start;i<=end;i++){
            if(freq[i]==0){
                return false;
            }
        }
        return true;
    }
};

class Solution {
  public:
    int coin(vector<int>& arr) {
        // code here
        while(arr.size()>1){
            if(arr[0]>=arr[arr.size()-1]){
                arr.erase(arr.begin());
            }
            else{
                arr.erase(arr.end());
            }
        }
        return arr[0];
    }
};
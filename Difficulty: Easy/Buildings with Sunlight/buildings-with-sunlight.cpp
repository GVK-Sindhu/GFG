class Solution {
  public:
    int visibleBuildings(vector<int>& arr) {
        // code here
        int maxi=0,c=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=maxi){
                c++;
                maxi=arr[i];
            }
        }
        
        return c;
    }
};
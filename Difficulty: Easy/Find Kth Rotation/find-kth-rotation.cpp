class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int maxi=*max_element(arr.begin(),arr.end());
        if(arr.size()<=1){
            return 0;
        }
        int res=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==maxi && i!=arr.size()-1){
                res=i+1;
            }
        }
        return res;
    }
};

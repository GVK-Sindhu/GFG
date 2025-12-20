class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        int res=-1;
        bool found=false;
        for(int i=0;i<n;i++){
            if(arr[i]==k){
                res=i;
                found=true;
                break;
            }
        }
        if(found==false){
            for(int i=0;i<n;i++){
                if(arr[i]>k){
                    res=i;
                    break;
                }
            }
        }
        if(res==-1){
            res=n;
        }
        return res;
        
    }
};
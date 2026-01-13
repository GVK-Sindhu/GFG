class Solution {
  public:
    bool canServe(vector<int> &arr) {
        // code here
        int n=arr.size();
        int fc=0,tc=0;
        for(int i=0;i<n;i++){
            if(arr[i]==5){
                fc++;
            }
            else if(arr[i]==10){
               if(fc==0) return false;
               else {
                   fc--;
                   tc++;
               }
            }
            else{
               if(fc>0 && tc>0){
                   fc--;
                   tc--;
               } 
               else if(fc>=3){
                   fc-=3;
               }
               else{
                   return false;
               }
            }
        }
        return true;
    }
};
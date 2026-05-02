class Solution {
  public:
    int findPosition(int n) {
        // code here
        int pos=1;
        if(n>0 && (n&(n-1))==0){
            while(n>1){
                n=n>>1;
                pos++;
            }
        }
        else{
            return -1;
        }
        return pos;
    }
};
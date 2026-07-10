class Solution {
  public:
    int getCount(int n) {
        // code here
        int res=0;
        for(int k=2;(k*(k+1))/2<=n;k++){
            if((2*n)%k!=0){
                continue;
            }
            int val=(2*n)/k-k+1;
            if(val>0 && val%2==0){
               res++;    
            }
         }
        return res;
    }
};
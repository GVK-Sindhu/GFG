class Solution {
  public:
    int getCount(int n, int d) {
        // code here
        int l=1,h=n,res=-1;
        while(l<=h){
            int mid=(l+h)/2;
            int tmp=mid,s=0;
            while(tmp>0){
                s+=(tmp%10);
                tmp/=10;
            }
            if((mid-s)>=d){
                res=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return res==-1?0:(n-res+1);
        
    
        
    }
};
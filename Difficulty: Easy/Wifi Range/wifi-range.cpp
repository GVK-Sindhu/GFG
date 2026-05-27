class Solution {
  public:
    bool wifiRange(string &s, int k) {
        // code here
        vector<int>cover(s.size(),0);
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                int l=max(0,i-k);
                int r=min((int)s.size()-1,(i+k));
                for(int j=l;j<=r;j++){
                    if(s[j]=='1'){
                        cover[i]=1;
                        break;
                    } 
                }
            }
            else{
                cover[i]=1;
            }
        }
        for(int it:cover){
            if(it==0){
                return false;
            }
        }
        return true;
    }
};
class Solution {
  public:
    int maxSubstring(string &s) {
        // code here
        int maxres=0;
        vector<int>tmp(s.size(),0);
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                tmp[i]=1;
            }
            else{
                tmp[i]=-1;
            }
        }
        int curs=0;
        for(int i=0;i<tmp.size();i++){
            curs+=tmp[i];
            if(curs<0){
                curs=0;
            }
            maxres=max(maxres,curs);
        }
        return maxres==0?-1:maxres;
    }
};
class Solution {
  public:
    bool isgood(vector<int>&f1,vector<int>&f2)
    {
        for(int i=0;i<26;i++){
             if(f1[i]<f2[i]){
                return false;
            }
        }
        return true;
    }
    string minWindow(string &s, string &p) {
        // code here
        int l=0,r=0;
        vector<int>f1(26,0);
        vector<int>f2(26,0);
        for(int i=0;i<p.size();i++){
            f2[p[i]-'a']++;
        }
        int st=-1,ed=-1;
        int n=s.size();
        int ans=INT_MAX;
        while(r<n){
            f1[s[r]-'a']++;
            while(isgood(f1,f2)){
                if((r-l+1)<ans){
                    ans=(r-l+1);
                    st=l;
                    ed=r;
                }
                f1[s[l]-'a']--;
                l++;
            }
            r++;
        }
        string res;
        if(st==-1 || ed==-1) return res;
        for(int i=st;i<=ed;i++){
            res+=s[i];
        }
        // res=s.substr(st,ed);
        return res;
        
    }
};
        



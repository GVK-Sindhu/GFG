class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int maxlen=-1,l=0,r=0;
        unordered_map<int,int>freq;
        int unique=0,n=s.size();
        while(r<n){
            if(freq[s[r]-'a']==0){
                unique++;
            }
            freq[s[r]-'a']++;
            while(unique>k){
                freq[s[l]-'a']--;
                if(freq[s[l]-'a']==0){
                    unique--;
                }
                l++;
            }
            if(unique==k){
                maxlen=max(maxlen,(r-l+1));
            }
            r++;
        }
        return maxlen;
    }
};
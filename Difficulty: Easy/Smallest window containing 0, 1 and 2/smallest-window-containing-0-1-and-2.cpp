class Solution {
  public:
    int isgood(unordered_map<char,int>freq){
        if(freq.size()==3){
            return true;
        }
        return false;
    }
    int smallestSubstring(string s) {
        // code here
        int minlen=INT_MAX;
        int l=0,r=0;
        int n=s.size();
        unordered_map<char,int>freq;
        while(r<n){
            freq[s[r]]++;
            while(isgood(freq)){
                minlen=min(minlen,(r-l+1));
                freq[s[l]]--;
                if(freq[s[l]]==0){
                    freq.erase(s[l]);
                }
                l++;
            }
            r++;
        }
        return minlen==INT_MAX?-1:minlen;
        
    }
};

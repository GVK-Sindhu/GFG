class Solution {
  public:
    bool areIsomorphic(string &s1, string &s2) {
        // code here
        unordered_map<char,char>freq1;
        unordered_map<char,char>freq2;
        if(s1.size()!=s2.size()){
            return false;
        }
        for(int i=0;i<s1.size();i++){
            if(freq1.find(s1[i])==freq1.end()){
                freq1[s1[i]]=s2[i];
            }
            else if(freq1.find(s1[i])!=freq1.end() && freq1[s1[i]]!=s2[i]){
                return false;
            }
            
            if(freq2.find(s2[i])==freq2.end()){
                freq2[s2[i]]=s1[i];
            }
            
            else if(freq2.find(s2[i])!=freq1.end() && freq2[s2[i]]!=s1[i]){
                return false;
            }
            
        }
        return true;
    }
};

// abc 
// xxz

// false
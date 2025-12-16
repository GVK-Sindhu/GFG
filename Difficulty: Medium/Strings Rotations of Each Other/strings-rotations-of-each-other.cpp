class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        // code here
        string tmp=s1+s1;
        if(tmp.find(s2)!=string::npos){
            return true;
        }
        return false;
        
    }
};
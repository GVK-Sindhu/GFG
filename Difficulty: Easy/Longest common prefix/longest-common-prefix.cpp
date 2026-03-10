// User function template for C++

class Solution {
  public:
    int longestCommonPrefix(string str1, string str2) {
        // code here
        int res=0;
        for(int i=1;i<=str2.size();i++){
            string pref=str1.substr(0,i);
            if(str2.find(pref)!=string::npos){
                res=i;
            }
        }
        return res;
    }
};
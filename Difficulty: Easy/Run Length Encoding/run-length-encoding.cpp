class Solution {
  public:
    string encode(string &s) {
        // code here
        int n=s.size();
        int c=1;
        string tmp;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                c++;
            }
            else{
                tmp+=s[i];
                tmp+=to_string(c);
                c=1;
            }
        }
        tmp+=s[n-1];
        tmp+=to_string(c);
        return tmp;
    }
};
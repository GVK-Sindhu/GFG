class Solution {
  public:
    int countDigits(int n) {
        // code here
        string s=to_string(n);
        return s.length();
        
        int tmp=n;
        int c=0;
        while(tmp>0){
            c++;
            tmp/=10;
        }
        return c;
    }
};
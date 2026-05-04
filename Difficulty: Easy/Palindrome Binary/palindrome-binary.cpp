class Solution {
  public:
    bool isBinaryPalindrome(int n) {
        // code here
        int tmp=n;
        vector<int>bits;
        while(n){
            bits.push_back(n%2);
            n=n/2;
        }
        // bits.push_back(n%2);
        int l=0,r=bits.size()-1;
        while(l<=r){
            if(bits[l]!=bits[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
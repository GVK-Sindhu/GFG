// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        string revs=s;
        reverse(revs.begin(),revs.end());
        return revs;
    }
};

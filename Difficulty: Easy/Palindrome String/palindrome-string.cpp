class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        // string revs=s;
        // reverse(s.begin(),s.end());
        // if(s==revs){
        //     return true;
        // }
        // else{
        //     return false;
        // }
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
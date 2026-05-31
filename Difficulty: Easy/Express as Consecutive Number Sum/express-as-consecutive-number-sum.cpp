class Solution {
  public:
    bool isSumOfConsecutive(int n) {
        // code here
        if(n==1 || (n&(n-1))==0){
            return false;
        }
        return true;
    }
};
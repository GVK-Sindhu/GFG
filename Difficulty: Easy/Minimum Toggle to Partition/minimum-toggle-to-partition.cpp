class Solution {
  public:
    int minToggle(vector<int>& arr) {
        // code here
         int n = arr.size();

        int totalZero = 0;

        for(int x : arr) {
            if(x == 0) totalZero++;
        }

        int leftOnes = 0;
        int rightZeros = totalZero;

        int ans = rightZeros; // all become 1

        for(int i = 0; i < n; i++) {

            // move current element from right to left
            if(arr[i] == 1)
                leftOnes++;
            else
                rightZeros--;

            ans = min(ans, leftOnes + rightZeros);
        }

        return ans;
    }
};
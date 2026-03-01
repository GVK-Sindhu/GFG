class Solution {
  public:
    void pushZerosToEnd(vector<int>& nums) {
        // code here
        int n=nums.size();
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }
        }
        while(j<n){
             nums[j]=0;
             j++;
        }
    }
};
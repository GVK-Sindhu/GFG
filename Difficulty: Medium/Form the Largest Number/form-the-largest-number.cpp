class Solution {
  public:
    static bool cmp(string &a,string &b){
        return a+b>b+a;
    }
    
    string findLargest(vector<int> &arr) {
        // code here
        vector<string>nums;
        string res;
        for(int it:arr){
            nums.push_back(to_string(it));
        }
        sort(nums.begin(),nums.end(),cmp);
        if(nums[0]=="0"){
            return "0";
        }
       for(string it:nums){
           res+=it;
       }
       return res;
    }
};
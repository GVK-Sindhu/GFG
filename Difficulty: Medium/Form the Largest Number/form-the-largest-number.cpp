class Solution {
  public:
    static bool cmp( a,int b){
        string astr=to_string(a);
        string bstr=to_string(b);
        return astr+bstr>bstr+astr;
    }
    string findLargest(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end(),cmp);
        if(arr[0]==0) return "0";
        string res="";
        for(int it:arr){
            res+=to_string(it);
        }
        return res;
    }
};
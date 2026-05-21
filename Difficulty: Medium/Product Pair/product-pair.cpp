class Solution {
  public:
    bool isProduct(vector<int>& arr, long long target) {
        // code here
        unordered_map<int,int>freq;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                if(target==0 && freq[0]>1){
                return true;
            }
            continue;
            }
            
           else{
                if(target%arr[i]==0 && freq[target/arr[i]]>0 && target/arr[i]!=arr[i]){
                return true;
            }
            else if(target%arr[i]==0 && target/arr[i]==arr[i] && freq[target/arr[i]]>1){
                return true;
            }
           }
        }
        return false;
    }
};
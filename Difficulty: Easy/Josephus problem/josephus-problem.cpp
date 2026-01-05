class Solution {
  public:
    int fun(int idx,int k ,vector<int>&arr){
        if(arr.size()==1){
            return arr[0];
        }
        idx=((idx+k-1)%arr.size());
        // cout<<arr[idx]<<" ";
        arr.erase(arr.begin()+idx);
        return fun(idx,k,arr);
    }
    int josephus(int n, int k) {
        // code here
        vector<int>arr;
        for(int i=0;i<n;i++){
            arr.push_back(i+1);
            // cout<<arr[i]<<" ";
        }
            
        int idx=0;
        int res=fun(idx,k,arr);
    
        return res;
    }
};
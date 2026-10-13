class Solution {
  public:
    vector<int> update(int n, vector<int>& tmp) {
        // code here
        vector<int>arr(n,0);
        for(int i=0;i<tmp.size();i++){
            arr[tmp[i]-1]++;
        }
        for(int i=1;i<n;i++){
            arr[i]+=arr[i-1];
        }
        return arr;
    }
};

//  0 1 2 3
    //   1+2+3=6
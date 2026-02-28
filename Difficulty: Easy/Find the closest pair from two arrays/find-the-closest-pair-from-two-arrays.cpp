class Solution {
  public:
    vector<int> findClosestPair(vector<int> &arr1, vector<int> &arr2, int x) {
        // code here
        int n1=arr1.size();
        int n2=arr2.size();
        int i=0,j=n2-1;
        int mini=INT_MAX;
        int a,b;
        while(i<n1 && j>=0){
            if(arr1[i]+arr2[j]>=x){
                if(abs((arr1[i]+arr2[j])-x)<mini){
                    mini=abs((arr1[i]+arr2[j])-x);
                    a=arr1[i];
                    b=arr2[j];
                }
                j--;
            }
            else if(arr1[i]+arr2[j]<x){
                if(abs((arr1[i]+arr2[j])-x)<mini){
                    mini=abs((arr1[i]+arr2[j])-x);
                    a=arr1[i];
                    b=arr2[j];
                }
                i++;
            }
        }
        vector<int>res;
        res.push_back(a);
        res.push_back(b);
        return res;
    }
};
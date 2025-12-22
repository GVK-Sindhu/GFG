// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        
        int row=arr.size();
        int col=arr[0].size();
        int maxoc=0,maxidx=-1;
        for(int i=0;i<row;i++){
            int oc=0;
            for(int j=0;j<col;j++){
                if(arr[i][j]==1){
                    oc++;
                }
            }
            if(maxoc<oc){
                maxoc=oc;
                maxidx=i;
            }
        }
        return maxidx;
        
    }
};
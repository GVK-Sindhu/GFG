class Solution {
  public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        // code here
        int row=mat.size();
        int col=mat[0].size();
        int top=INT_MIN,bottom=INT_MIN,left=INT_MIN,right=INT_MIN;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(i>0){
                    top=mat[i-1][j];
                    
                }
                if(i<row-1){
                  bottom=mat[i+1][j];
                    
                }
                if(j>0){
                    left=mat[i][j-1];
                }
                if(j<col-1){
                   right=mat[i][j+1];
                }
                    
                if(mat[i][j]>=top && mat[i][j]>=bottom && mat[i][j]>=left
                    && mat[i][j]>=right){
                      return {i,j};   
                }
            }
        }
        return {-1,-1};
    }
};

class Solution {
  public:
    vector<int> exitPoint(vector<vector<int>>& mat) {
        // code here
        int n=mat.size(),m=mat[0].size();
        int i=0,j=0,dir=0;
        while(true){
            if(mat[i][j]==1){
                dir=(dir+1)%4;
                mat[i][j]=0;
            }
            if(dir==0) j++;
            else if(dir==1) i++;
            else if(dir==2) j--;
            else i--;
            
            if(i<0) return {0,j};
            if(i>=n) return {n-1,j};
            if(j<0) return {i,0};
            if(j>=m) return {i,m-1};
        }
    }
};
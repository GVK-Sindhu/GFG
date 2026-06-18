class Solution {
  public:
    int findCoverage(vector<vector<int>>& mat) {
        // code here
        int r=mat.size();
        int c=mat[0].size();
        int res=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++)
            {
                if(mat[i][j]==0){
                    int up=0,down=0,lft=0,rght=0;
                    int k=i;
                    while(k>0){
                        k--;
                        if(mat[k][j]==1){
                            up++;
                            break;
                        }
                    }
                    k=i;
                    while(k<r-1){
                        k++;
                        if(mat[k][j]==1){
                            down++;
                            break;
                        }
                    }
                    k=j;
                    while(k>0){
                        k--;
                        if(mat[i][k]==1){
                            lft++;
                            break;
                        }
                    }
                    k=j;
                    while(k<c-1){
                      k++;
                      if(mat[i][k]==1){
                          rght++;
                          break;
                      }
                    }
                    res+=up;
                    res+=down;
                    res+=lft;
                    res+=rght;
                }
            }
        }
        return res;
    }
};

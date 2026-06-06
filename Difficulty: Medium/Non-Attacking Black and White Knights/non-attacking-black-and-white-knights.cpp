class Solution {
  public:
    int numOfWays(int n, int m) {
        // code here
        int attack=0;
        int total=n*m;
        total=total*(total-1);
        int x[]={-2,-1,1,2};
        int y[]={1,2,2,1};
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               for(int k=0;k<4;k++){
                   int xpos=i+x[k];
                   int ypos=j+y[k];
                   if(xpos>=0 && xpos<n && ypos>=0 && ypos<m){
                       attack+=2;
                   }
               }
            }
        }
        return total-attack;
        
    }
};


// tocheck
// (i-2,j-1),(i-2,j+1),
// (i-1,j-2),(i-1,j+2),
// (i+1,j-2),(i+1,j+2),
// (i+2,j-1),(i+2,j+1)


// 1 1  1 1
// 1 1  1    4*3 (2*2)*((2*2)-1) 
class Solution {
  public:
    bool issafe(vector<string>&board,int row,int col,int n){
        int tmprow=row;
        int tmpcol=col;
        while(row>=0 && col>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            row--;
            col--;
        }
        row=tmprow;
        col=tmpcol;
        while(row>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            row--;
        }
        row=tmprow;
        col=tmpcol;
        while(col<n && row>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            row--;
            col++;
        }
        return true;
    }
    void solve(int row,vector<string>&board,int n,vector<vector<int>>&ans,vector<int>&tmp){
        
        if(row==n){
            ans.push_back(tmp);
            return;
        }
        for(int col=0;col<n;col++){
            if(issafe(board,row,col,n)){
                board[row][col]='Q';
                tmp.push_back(col+1);
                solve(row+1,board,n,ans,tmp);
                board[row][col]='.';
                tmp.pop_back();
            }
        }
    }
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>>ans;
        vector<string>board(n,string(n,'.'));
        vector<int>tmp;
        int row=0;
        solve(row,board,n,ans,tmp);
        return ans;
    }
};
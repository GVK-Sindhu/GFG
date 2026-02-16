class Solution {
  public:
    void solve(int i,int j,int n,vector<vector<int>>&maze,vector<vector<int>>&visited,
    string &move,vector<string>&ans){
        if(i==n-1 && j==n-1){
            ans.push_back(move);
            return;
        }
          visited[i][j]=1;
        // down
        if((i+1)<n && !visited[i+1][j] && maze[i+1][j]==1){
          
            move.push_back('D');
            solve(i+1,j,n,maze,visited,move,ans);
            move.pop_back();
        }
        // left
        if((j-1)>=0 && !visited[i][j-1] && maze[i][j-1]==1){
            
            move.push_back('L');
            solve(i,j-1,n,maze,visited,move,ans);
            move.pop_back();
            
        }
        // right
        if((j+1)<n && !visited[i][j+1] && maze[i][j+1]==1){
            
            move.push_back('R');
            solve(i,j+1,n,maze,visited,move,ans);
            move.pop_back();
            
        }
        // up
        if((i-1)>=0 && !visited[i-1][j] && maze[i-1][j]==1){
           
            move.push_back('U');
            solve(i-1,j,n,maze,visited,move,ans);
            move.pop_back();
           
        }
         visited[i][j]=0;
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        int n=maze.size();
        string move="";
        vector<string>ans;
        vector<vector<int>>visited(n,vector<int>(n,0));
        if(maze[0][0]==1){
            solve(0,0,n,maze,visited,move,ans);
        }
        return ans;
    }
};
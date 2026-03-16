/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
   int c=0;
    void dfs(Node *root,int curs,int k,unordered_map<int,int>&mp){
        curs+=root->data;
        if(mp.find(curs-k)!=mp.end()){
            c+=mp[curs-k];
        }
        mp[curs]++;
        if(root->left){
            dfs(root->left,curs,k,mp);
        }
        if(root->right){
            dfs(root->right,curs,k,mp);
        }
        mp[curs]--;
    }
    int countAllPaths(Node *root, int k) {
        // code here
        if(!root) return 0;
        unordered_map<int,int>mp;
        mp[0]=1;
        dfs(root,0,k,mp);
        return c;
    }
};
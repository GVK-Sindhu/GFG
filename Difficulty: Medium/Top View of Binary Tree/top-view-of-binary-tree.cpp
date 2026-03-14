/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    void dfs(Node* node,int hd,int level,map<int,pair<int,int>>&topnodes){
        if(!node) return;
        if(topnodes.find(hd)==topnodes.end() || topnodes[hd].second>level){
            topnodes[hd]={node->data,level};
        }
        dfs(node->left,hd-1,level+1,topnodes);
        dfs(node->right,hd+1,level+1,topnodes);
    }
    vector<int> topView(Node *root) {
        // code here
        vector<int>res;
        if(!root) return res;
        map<int,pair<int,int>>topnodes;
        dfs(root,0,0,topnodes);
        for(auto it:topnodes){
            res.push_back(it.second.first);
        }
        return res;
    }
};
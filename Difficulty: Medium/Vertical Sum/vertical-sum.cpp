/* Structure of binary tree node
class Node{
public:
    int data;
    Node* left, right;
    Node(int item)
    {
        data = item;
        left = nullptr;
        right = nullptr;
    }
}
*/
class Solution {
  public:
    void dfs(Node* node,int hd,map<char,int>&mp){
        if(!node){
            return;
        }
        dfs(node->left,hd-1,mp);
        mp[hd]+=node->data;
        dfs(node->right,hd+1,mp);
    }
    vector<int> verticalSum(Node* root) {
        // code here
        map<char,int>mp;
        dfs(root,0,mp);
        vector<int>res;
        for(auto it=mp.begin();it!=mp.end();it++){
            res.push_back(it->second);
        }
        return res;
    }
};
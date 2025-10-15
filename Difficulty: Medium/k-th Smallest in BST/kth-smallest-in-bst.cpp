/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int>res;
    void inorder(Node *root,vector<int>&res){
        if(!root){
            return ;
        }
        
        inorder(root->left, res);
        res.push_back(root->data);
        inorder(root->right,res);
    }
    int kthSmallest(Node *root, int k) {
        // code here
        inorder(root,res);
        if(k>0 && k<=res.size()){
            return res[k-1];
        }
        else{
            return -1;
        }
        
    }
};
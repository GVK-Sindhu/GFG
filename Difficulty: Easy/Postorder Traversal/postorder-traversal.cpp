/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int>arr;
    void func(Node * root, vector<int>&arr){
        if(!root){
            return;
        }
        func(root->left,arr);
        func(root->right,arr);
        arr.push_back(root->data);
    }
    vector<int> postOrder(Node* root) {
        // code here
        func(root,arr);
        return arr;
      
    }
};
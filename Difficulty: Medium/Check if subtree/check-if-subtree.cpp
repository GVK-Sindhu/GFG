/*
Structure of a Tree Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool func(Node *root1,Node *root2){
        if(!root1 && !root2){
            return true;
        }
        if(!root1 || !root2){
            return false;
        }
        if(root1->data!=root2->data){
            return false;
        }
        return func(root1->left,root2->left) && func(root1->right,root2->right);
    }
    bool isSubTree(Node *root1, Node *root2) {
        // code here
        if(!root1 && !root2){
            return true;
        }
        if(!root1){
            return false;
        }
        if(root1->data==root2->data && func(root1,root2)){
            return true;
        }
        return isSubTree(root1->left,root2) || isSubTree(root1->right,root2);
    }
};
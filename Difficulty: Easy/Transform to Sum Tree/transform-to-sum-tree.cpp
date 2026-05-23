/* Structure for Tree Node
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
    int dfs(Node * root){
        if(!root) return 0;
        int old=root->data;
        int leftsum=dfs(root->left);
        int rightsum=dfs(root->right);
        root->data=leftsum+rightsum;
        return old+leftsum+rightsum;
    }
    void toSumTree(Node *root) {
        // code here
        
        dfs(root);
    }
};
/* Binary Tree Node Structure
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    void solve(Node* root,vector<int>&dist,int c){
        if(root->left==nullptr && root->right==nullptr){
            dist.push_back(c);
            return ;
        }
        if(root->left){
            solve(root->left,dist,c+1);
        }
        if(root->right){
            solve(root->right,dist,c+1);
        }
    }
    int getCount(Node *root, int k) {
        // code here
        vector<int>dist;
        int c=0;
        c++;
        solve(root,dist,c);
        sort(dist.begin(),dist.end());
        int s=0,res=0;
        for(auto it:dist){
            if(s+it>k){
                break;
            }
            s+=it;
            res++;
        }
        return res;
    }
};
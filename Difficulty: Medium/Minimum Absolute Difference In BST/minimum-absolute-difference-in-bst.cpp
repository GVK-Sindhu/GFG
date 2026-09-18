/* Binary Tree Node Structure
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

void solve(Node *root,vector<int>&res){
    // if(root==NULL){
    //     return ;
    // }
    if(root->left){
        res.push_back(root->left->data);
        solve(root->left,res);
    }
    if(root->right){
        res.push_back(root->right->data);
        solve(root->right,res);
    }
}

class Solution {
  public:
    int absDiff(Node *root) {
        // code here
        vector<int>res;
        if(root==NULL){
            return 0;
        }
        res.push_back(root->data);
        solve(root,res);
        int minres=INT_MAX;
        // for(int it:res){
        //     cout<<it<<" ";
        // }
        // cout<<"\n";
        sort(res.begin(),res.end());
        for(int i=1;i<res.size();i++){
            int dif=abs(res[i]-res[i-1]);
            minres=min(minres,dif);
        }
        return minres;
    }
};
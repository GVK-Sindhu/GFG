/* Structure of binary tree Node
class Node {
    public:
    int data;
    Node *left, *right;
    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    void solve(Node* root,vector<vector<int>>&tmp){
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>lev;
            int n=q.size();
            for(int i=0;i<n;i++){
                Node* node=q.front();
                lev.push_back(node->data);
                q.pop();
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            tmp.push_back(lev);
        }
    }
    bool areAnagrams(Node* root1, Node* root2) {
        // code here
        vector<vector<int>>tmp1;
        solve(root1,tmp1);
        vector<vector<int>>tmp2;
        solve(root2,tmp2);
        int n=tmp1.size(),m=tmp2.size();
        if(n!=m){
            return false;
        }
        for(int i=0;i<n;i++){
            int len1=tmp1[i].size();
            int len2=tmp2[i].size();
            if(len1!=len2){
                return false;
            }
            vector<int>a1=tmp1[i];
            vector<int>a2=tmp2[i];
            sort(a1.begin(),a1.end());
            sort(a2.begin(),a2.end());
            for(int j=0;j<len1;j++){
              if(a1[j]!=a2[j]){
                  return false;
              }
            }
        }
        return true;
    }
};

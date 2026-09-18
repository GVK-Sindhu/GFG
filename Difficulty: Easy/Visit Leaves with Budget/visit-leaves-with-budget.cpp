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
    int getCount(Node *root, int k) {
        int l=1;
        queue<Node*>q;
        q.push(root);
        vector<int>dist;
        while(!q.empty()){
            int sz=q.size();
            for(int i=0;i<sz;i++){
                Node*tmp=q.front();
                q.pop();
                if(tmp->left==nullptr && tmp->right==nullptr){
                    dist.push_back(l);
                }
                if(tmp->left){
                    q.push(tmp->left);
                }
                if(tmp->right){
                    q.push(tmp->right);
                }
            }
            l++;
        }
        sort(dist.begin(), dist.end());

               int sum = 0;
               int ans = 0;

               for(int cost : dist) {

                   if(sum + cost > k)
                       break;

                   sum += cost;
                   ans++;
               }

               return ans;
    }
};
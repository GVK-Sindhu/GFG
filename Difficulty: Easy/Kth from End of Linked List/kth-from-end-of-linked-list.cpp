/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        int res=-1;
        Node* fast=head;
        for(int i=0;i<k;i++){
            if(fast==NULL){
                return -1;
            }
            fast=fast->next;
        }
         if(fast==NULL){
            return head->data;
        }
        Node* slow=head;
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        
            res=slow->next->data;
        
        return res;
    }
};
/* Structure of a Linked List node
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node *reverselist(Node *head){
        Node *prv=NULL;
       Node *tmp=head;
       if(tmp==nullptr){
           return nullptr;
       }
       while(tmp!=NULL){
           Node *nxt=tmp->next;
           tmp->next=prv;
           prv=tmp;
           tmp=nxt;
       }
       return prv;
    }
    Node *compute(Node *head) {
        // code here
        if(!head || !head->next){
            return head;
        }
        head=reverselist(head);
        Node* tmp=head;
        int maxi=tmp->data;
        while(tmp && tmp->next){
            if(tmp->next->data<maxi){
                tmp->next=tmp->next->next;
            }
            else{
                tmp=tmp->next;
                maxi=tmp->data;
            }
        }
        return reverselist(head);
    }
};

// 3 2 6 5 11 10 15 12
//-1 3 -1 6 -1 11 -1 15
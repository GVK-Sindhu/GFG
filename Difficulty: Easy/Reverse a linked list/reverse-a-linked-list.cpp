/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        if(head==NULL || head->next==NULL){
            return head;
        }
        Node* newhead=reverseList(head->next);
        Node* front=head->next;
        front->next=head;
        head->next=NULL;
        return newhead;
    }
};
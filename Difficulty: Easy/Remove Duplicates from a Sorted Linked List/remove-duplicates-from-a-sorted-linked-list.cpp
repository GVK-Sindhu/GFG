/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {

        // code here
        Node* tmp=head;
        // Node* newhead=head;
        while(tmp!=NULL && tmp->next!=NULL){
            if(tmp->data==tmp->next->data){
                Node *del=new Node(tmp->data);
                tmp->next=tmp->next->next;
                delete(del);
            }
            else{
            tmp=tmp->next;
            }
        }
        return head;
    }
};
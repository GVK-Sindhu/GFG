/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//  Function to insert a node in the middle of the linked list.
class Solution {
  public:
    Node *insertInMiddle(Node *head, int x) {
        // Code Here
        int len=0;
        Node* tmp=head;
        if(head==NULL){
            return new Node(x);
        }
        while(tmp!=NULL){
            len++;
            tmp=tmp->next;
        }
        int tar=ceil((double)len/2.0);
        tmp=head;
        int c=0;
        while(tmp!=NULL){
            c++;
            if(c==tar){
                Node *newNode=new Node(x);
                newNode->next=tmp->next;
                tmp->next=newNode;
            }
            tmp=tmp->next;
        }
        return head;
    }
};
/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        Node *nxt=NULL;
        Node *prv=NULL;
        Node *curr=head;
        while(curr!=NULL){
            nxt=curr->next;
            curr->next=prv;
            curr->prev=nxt;
            prv=curr;
            curr=nxt;
        }
        return prv;
    }
};
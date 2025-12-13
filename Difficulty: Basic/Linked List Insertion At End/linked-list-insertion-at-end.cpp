/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node *tmp=head;
        if(head==NULL) return new Node(x);
        while(tmp->next!=NULL){
            tmp=tmp->next;
        }
        Node *newnode=new Node(x);
        tmp->next=newnode;
        return head;
    }
};
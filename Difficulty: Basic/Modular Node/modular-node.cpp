/*Struture of the node of the linked list is as:

struct Node {
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
// Your task is to complete the function
// function should return the modular Node
// if no such node is present then return -1
class Solution {
  public:
    int modularNode(Node *head, int k) {
        // Code here
        int res=0,l=0;
        Node* tmp=head;
        if(head==NULL){
            return 0;
        }
        while(tmp!=NULL){
            l++;
            if(l%k==0) res=tmp->data;
            tmp=tmp->next;
        }
        return res==0?-1:res;
    }
};
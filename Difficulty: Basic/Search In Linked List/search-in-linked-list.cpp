// User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }

};
*/
class Solution {
  public:
    bool searchLinkedList(Node *head, int x) {
        // Your code here
        Node* tmp=head;
        while(tmp!=NULL){
            if(tmp->data==x){
                return true;
            }
            tmp=tmp->next;
        }
        return false;
    }
};
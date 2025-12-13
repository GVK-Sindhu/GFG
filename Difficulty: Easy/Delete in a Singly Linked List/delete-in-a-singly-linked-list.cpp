/*
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // code here
        if(head==NULL || (head->next==NULL && x==1 )) return NULL;
        Node* prev=NULL;
        Node*tmp=head;
        int c=1;
        if(x==1){
            Node*del=tmp;
            head=head->next;
            delete del;
            return head;
        }
        while(tmp!=NULL){
            if(c==x){
                Node *del=prev->next;
                prev->next=prev->next->next;
                delete del;
                break;
            }
            c++;
            prev=tmp;
            tmp=tmp->next;
        }
        return head;
    }
};
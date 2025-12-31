/*
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* reversefun(Node * head){
        Node* prv=NULL;
        Node* cur=head;
        while(cur!=NULL){
            Node* nxt=cur->next;
            cur->next=prv;
            prv=cur;
            cur=nxt;
        }
        return prv;
    }
    Node* trim(Node* head){
        if(head==NULL){
            return head;
        }
        while(head!=NULL){
            if(head->data!=0){
                return head;
            }
            head=head->next;
        }
        return head;
    }
    Node* addTwoLists(Node* head1, Node* head2) {
        // code here
        Node* tmp1=reversefun(trim(head1));
        Node* tmp2=reversefun(trim(head2));
        Node* dummy=new Node(-1);
        Node* cur=dummy;
        int carry=0;
        while(tmp1!=NULL && tmp2!=NULL){
            Node* data1=new Node (((tmp1->data)+(tmp2->data)+carry)%10);
            carry=((tmp1->data)+(tmp2->data)+carry)/10;
            cur->next=data1;
            cur=data1;
            tmp1=tmp1->next;
            tmp2=tmp2->next;
        }
        while(tmp1!=NULL){
            cur->next=new Node((tmp1->data+carry)%10);
            carry=(tmp1->data+carry)/10;
            cur=cur->next;
            tmp1=tmp1->next;
        }
        while(tmp2!=NULL){
            cur->next=new Node((tmp2->data+carry)%10);
            carry=(tmp2->data+carry)/10;
            cur=cur->next;
            tmp2=tmp2->next;
        }
        if(carry){
             cur->next=new Node(carry);
             cur=cur->next;
             carry=0;
        }
        Node* head =reversefun(dummy->next);
        return head;

    }
};
/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};
*/

class Solution {
  public:
    Node* reversefun(Node* head){
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
    bool isPalindrome(Node *head) {
        //  code here
         Node* fast=head;
         Node* slow=head;
         if(head==NULL || head->next==NULL){
             return true;
         }
         while(fast->next!=NULL && fast->next->next!=NULL){
             fast=fast->next->next;
             slow=slow->next;
         }
         Node* newhead=reversefun(slow->next);
         Node* tmp=head;
         Node* tmp1=newhead;
         while(newhead!=NULL){
             if(tmp->data!=newhead->data){
                 reversefun(tmp1);
                 return false;
             }
             tmp=tmp->next;
             newhead=newhead->next;
         }
         reversefun(tmp1);
         return true;
    }
};
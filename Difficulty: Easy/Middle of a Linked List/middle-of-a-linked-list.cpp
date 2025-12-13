/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */

class Solution {
  public:
    int getMiddle(Node* head) {
        // code here
        Node*tmp=head;
        int len=0;
        if(head==NULL) return NULL;
        while(tmp!=NULL){
            len++;
            tmp=tmp->next;
        }
        int tar=0;
        if(len%2==0){
            tar=(len/2)+1;
        }
        else{
            tar=ceil(len/2.0);
        }
        int c=0,res=0;
        tmp=head;
        while(tmp!=NULL){
            c++;
            if(c==tar){
                res=tmp->data;
                break;
            }
            tmp=tmp->next;
        }
        return res;
    }
};
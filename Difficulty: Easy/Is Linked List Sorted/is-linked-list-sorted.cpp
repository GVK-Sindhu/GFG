/*
class Node
{
  public:
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
    bool isSorted(Node* head) {
        // code here
        Node* tmp=head;
        if(head->next==NULL){
            return true;
        }
        bool isinc=false,isdec=false;
        while(tmp->next!=NULL){
            if(tmp->data!=tmp->next->data && tmp->data < tmp->next->data){
                isinc=true;
                break;
            }
            else if(tmp->data!=tmp->next->data && tmp->data > tmp->next->data){
                isdec=true;
                break;
            }
            
            tmp=tmp->next;
        }
        if(isinc){
            tmp=head;
            while(tmp->next!=NULL){
                if(tmp->data>tmp->next->data){
                    return false;
                }
                tmp=tmp->next;
            }
        }
        if(isdec){
            tmp=head;
            while(tmp->next!=NULL){
                if(tmp->data<tmp->next->data){
                    return false;
                }
                tmp=tmp->next;
            }
        }
        return true;
        
    }
};
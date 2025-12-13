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
    bool areIdentical(Node *head1, Node *head2) {
        // code here
        Node*tmp1=head1;
        Node*tmp2=head2;
        while(tmp1!=NULL || tmp2!=NULL){
            if((tmp1==NULL && tmp2!=NULL) || (tmp1!=NULL && tmp2==NULL)){
                return false;
            }
            else if(tmp1->data!=tmp2->data){
                return false;
            }
            
            tmp1=tmp1->next;
            tmp2=tmp2->next;
        }
        return true;
    }
};
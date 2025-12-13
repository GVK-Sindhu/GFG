/*
// Representation of a node
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* arrayToList(vector<int>& arr) {
        // code here
        Node* prev=new Node(NULL);
        Node* head=prev;
        for(int it:arr){ 
            Node*tmp=new Node(it);
            prev->next=tmp;
            prev=tmp;
        }
        
        return head->next;
    }
};
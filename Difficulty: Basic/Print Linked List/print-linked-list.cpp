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
    vector<int> displayList(Node *head) {
        // code here
        vector<int>res;
        Node *tmp=head;
        while(tmp!=NULL){
            res.push_back(tmp->data);
            tmp=tmp->next;
        }
        return res;
    }
};
// User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};

*/
vector<int> displayList(Node *head) {
    Node* tmp=head;
    vector<int>res;
    while(tmp!=NULL){
        res.push_back(tmp->data);
        tmp=tmp->next;
    }
    return res;
}
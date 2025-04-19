#include <iostream>
using namespace std;
class Node {
    public:
        int val;
        Node* next;
        Node(int val) {
            this->val=val;
            this->next=NULL;
        } 
};
void insert_at_tail(Node *head, int v) {
    Node *newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
    }
    Node *temp = head;
    if (temp->next != NULL) {
        temp = temp->next;
    }

}
int main() {
    Node *head = NULL;
    cout<<"Option: Insert at tail: ";
    int op;
    cin>>op;
    if(op == 1) {

    }

    return 0;
}
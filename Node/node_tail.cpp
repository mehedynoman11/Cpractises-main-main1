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
void insert_at_tail(Node *&head, int v) {
    Node *newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node *temp = head;
    if (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;

}
void print_linked_list(Node *head) {
    Node *tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
    }
    tmp = tmp->next;
}
int main() {
    Node *head = NULL;
    cout<<"Option: Insert at tail: ";
    int op;
    cin>>op;
    if(op == 1) {
        int v;
        cin >> v;
        insert_at_tail(head, v);
    }
    print_linked_list(head);

    return 0;
}
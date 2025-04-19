#include <iostream>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node (int val) {
            this->val = val;
            this->next = NULL;
        }
};
void insert_at_tail(Node *&head, int val){
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void print_linked_list(Node *head) {
    Node *tmp = head;
    while (tmp != NULL) {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl<<endl;
}
bool has_duplicate(Node *head) {
    Node *tmp = head;
    int freq[100] = {0};
    while (tmp != NULL) {
        freq[tmp->val]++;
        if (freq[tmp->val] > 1) {
            return true;
        }
        tmp = tmp->next;
    }
    return false;
}
int main() {
    Node *head = NULL;
    int val;
    while(true) {
        cin>>val;
        if (val == -1) break;
        insert_at_tail(head, val);
    }
    print_linked_list(head);
    if (has_duplicate(head)) {
        cout<<"Linked list contain duplicate value."<<endl;
    } else {
        cout<<"Linked list does not contain any duplicate value."<<endl;
    }

    return 0;
}
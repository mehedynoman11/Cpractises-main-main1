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
void insert_at_tail(Node*& head, int v) {
    Node* newNode = new Node(v);
    if(head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL) {
        temp=temp->next;
    }
    temp->next=newNode;
}
void print_linked_list(Node* head) {
    Node* tmp = head;
    while(tmp != NULL) {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;

}
void insert_at_position(Node* head, int pos, int v) {
    Node* newNode = new Node(v);
    Node* tmp = head;
    for(int i=1;i<=pos-1;i++) {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next=newNode;
    cout<<endl<<endl<<"Inserted at position"<<endl<<endl;
}
int main() {
    Node* head = NULL;
    while (true) {
        cout<<"Option 1: Insert at tail."<<endl;
        cout<<"Option 2: Print linked list."<<endl;
        cout<<"Option 3: Insert at Any Position."<<endl;
        cout<<"Option 4: Terminate"<<endl;
        int op;
        cin>>op;
        if (op == 1) {
            int v;
            cout<<"Please Enter a Value: ";
            cin >> v;
            
            insert_at_tail(head, v);
        } else if (op == 2) {
            print_linked_list(head);
        } else if (op == 3) {
            int pos, val;
            cout<<"Enter a Position: ";
            cin>>pos;
            cout<<"Enter a value: ";
            cin>>val;
            insert_at_position(head,pos,val);
        } else if (op == 4) {
            break;
        } 
    }
    return 0;
}
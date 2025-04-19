#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_node(Node*& head, int v)
{
    Node* newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void print_linked_list(Node* head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insert_at_position(Node* head, int pos, int v) {
    Node* newNode = new Node(v);
    Node* tmp = head;
    for(int i=1;i<=pos-1;i++) {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void insert_at_head(Node* &head, int v) {
    Node* newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}
void delete_from_position(Node* head, int pos) {
    Node* tmp = head;
    for(int i=1;i<=pos-1;i++) {
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
int main()
{
    Node* head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at tail " << endl;
        cout << "Option 2: Print Linked List " << endl;
        cout << "Option 3: Insert at any position " << endl;
        cout << "Option 4: Insert at head " << endl;
        cout << "Option 5: Delete from Position " << endl;
        cout << "Option 6: Delete head " << endl;
        cout << "Option 7: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            int v;
            cout << "Please enter a value: ";
            cin >> v;
            insert_at_node(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            int pos;
            cout<<"Enter a position: ";
            cin>>pos;
            int val;
            cout<<"Enter a value: ";
            cin>>val;
            insert_at_position(head,pos,val);
        }
        else if (op == 4)
        {
            int v;
            cout<<"Enter a value: ";
            cin>>v;
            insert_at_head(head, v);
            cout<<"Inserted at head";
        }
        else if (op == 5)
        {
            int pos;
            cout<<"Enter a position: ";
            cin>>pos;
            delete_from_position(head, pos);
        }
        else if (op == 7)
        {
            break;
        }
    }

    return 0;
}
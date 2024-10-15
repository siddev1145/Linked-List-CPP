/*
 Name: Siddhant Bedre
 PRN: 23070123037
  Aim: Add node at beginning
*/
#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int data) {
        value = data;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int value) {
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->value << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;

    insertAtHead(head, 4);
    display(head);

    insertAtHead(head, 5);
    display(head);

    insertAtHead(head, 10);
    display(head);

    return 0;
}
//Output
/*4 -> NULL
5 -> 4 -> NULL
10 -> 5 -> 4 -> NULL*/

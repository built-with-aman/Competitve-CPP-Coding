#include <iostream>
using namespace std;
//head and tail are always non-null
// Node class
class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int d) {
        data = d;
        prev = nullptr;
        next = nullptr;
    }
};

// Print the linked list
void print(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Insert at head (head and tail are always non-null)
void insertAtHead(Node* &head, Node* &tail, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

// Insert at tail
void insertAtTail(Node* &head, Node* &tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

// Insert at any given position (1-based indexing)
void insertAtPosition(Node* &head, Node* &tail, int position, int d) {
    if (position == 1) {
        insertAtHead(head, tail, d);
        return;
    }

    Node* temp = head;
    int count = 1;

    while (count < position - 1 && temp->next != nullptr) {
        temp = temp->next;
        count++;
    }

    // Insert at tail if reached end
    if (temp->next == nullptr) {
        insertAtTail(head, tail, d);
        return;
    }

    // Insert in between
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    nodeToInsert->prev = temp;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
}

// Get length of linked list
int getLength(Node* head) {
    int length = 0;
    Node* temp = head;
    while (temp != nullptr) {
        length++;
        temp = temp->next;
    }
    return length;
}

// Main function
int main() {
    // Start with one node; head and tail are non-null
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);  // 10

    insertAtHead(head, tail, 12);
    print(head);  // 12 10

    insertAtHead(head, tail, 15);
    print(head);  // 15 12 10

    insertAtTail(head, tail, 22);
    print(head);  // 15 12 10 22

    insertAtPosition(head, tail, 2, 20);
    print(head);  // 15 20 12 10 22

    cout << "Length: " << getLength(head) << endl;  // Length: 5

    return 0;
}

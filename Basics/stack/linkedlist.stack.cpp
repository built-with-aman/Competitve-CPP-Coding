#include <iostream>
using namespace std;

// create stack using linked list  

template <class T>
class node {
public:
    T data;
    node* next;

    node(T d) {
        data = d;
        next = nullptr;
    }
};

template <class T>
class Stack {
    node<T>* head;  // type should include <T>

public:
    Stack() {
        head = nullptr;
    }

    void push(T data) {
        node<T>* newnode = new node<T>(data); // need <T>

        if (head == nullptr) {
            head = newnode;
            return;
        } else {
            newnode->next = head;
            head = newnode;
        }
    }

    void pop() {
        if (head == nullptr) {
            cout << "Stack underflow! Nothing to pop.\n";
            return;
        }

        node<T>* temp = head;
        head = head->next;
        delete temp;
    }

    T top() {
        if (head == nullptr) {
            cout << "Stack is empty!\n";
            exit(1); // avoid accessing null
        }
        return head->data;
    }

    bool isEmpty() {
        return head == nullptr;
    }
};

int main() {
    cout << "Program started\n";

    Stack<int> s;
    s.push(5);
    s.push(10);
    s.push(15);

    while (!s.isEmpty()) {
        cout << s.top() << endl;
        s.pop();
    }

    cout << "Done\n";
    return 0;
}

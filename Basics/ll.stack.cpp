#include<iostream>
#include<list>
using namespace std;

template<typename T>
class Stack {
    list<T> ll;

public:
    void push(T data) {
        ll.push_front(data);
    }

    void pop() {
        if (!ll.empty()) ll.pop_front();
    }

    T top() {
        return ll.front();
    }

    bool isEmpty() {
        return ll.empty(); 
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

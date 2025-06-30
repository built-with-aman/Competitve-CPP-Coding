//stack 
// A stack is a data structure that follows the Last In First Out (LIFO) principle.
// Elements can be added or removed from only one end, known as the top of the stack
// The stack is implemented using the STL stack container in C++.
// It provides functions to push elements onto the stack, pop elements off the stack, 
// and access the top element of the stack.
// It is commonly used in scenarios where elements need to be processed in reverse order of their addition.
// Example usage: Implementing a simple undo feature in a text editor.

#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3); // push is used to add an element to the top of the stack
    s.emplace(4); // emplace is used to construct an element in place

    cout<<s.top()<<endl; // top is used to access the top element of the stack
    s.pop(); // pop is used to remove the top element of the stack

    cout<<s.top()<<endl; // after popping, the new top element is displayed
    cout<<s.size()<<endl; // size is used to get the number of elements in the stack
    cout<<s.empty()<<endl; // empty is used to check if the stack is empty
    return 0;
}
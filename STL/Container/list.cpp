// list 
// A list is a container that stores elements in a specific order.
// It allows for efficient insertion and deletion of elements at any position.
// It is implemented using a doubly linked list in C++.
// The code includes operations such as inserting elements at the front and back,
// removing elements from the front and back, and iterating through the elements of the list.
// It is commonly used in scenarios where frequent insertions and deletions are required.
// Example usage: Implementing a simple to-do list where tasks can be added and removed dynamically.

#include <iostream>
#include <list>

int main() {
    std::list<int> myList;

    // Inserting elements at the front and back
    myList.push_front(1);
    myList.push_back(2);
    myList.push_back(3);

    // Removing elements from the front and back
    myList.pop_front();
    myList.pop_back();

    // Iterating through the elements of the list
    for (const auto& elem : myList) {
        std::cout << elem << " ";
    }

    return 0;
}
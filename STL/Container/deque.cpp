//explaining deque
// Deque (Double-Ended Queue)
// A deque is a sequence container that allows fast insertion and deletion 
// at both the front and the back ends.
// Unlike vectors, which allow efficient operations only at the back, 
// deques are optimized for both front and back operations.

// Internally, a deque is implemented as a dynamic array of fixed-size arrays, 
// allowing random access to elements like vectors.

// Key Properties:
// - Dynamic resizing
// - Fast insert/delete at both ends: O(1)
// - Random access via indexing
// - Slightly more memory overhead than vector

// Common Operations:
// dq.push_back(val);    // Insert element at the back
// dq.push_front(val);   // Insert element at the front
// dq.pop_back();        // Remove element from the back
// dq.pop_front();       // Remove element from the front
// dq.at(i);             // Access element at index i (bounds-checked)
// dq[i];                // Access element at index i (no bounds check)
// dq.front();           // Access the first element
// dq.back();            // Access the last element
// dq.empty();           // Check if the deque is empty
// dq.size();            // Get the number of elements
// dq.clear();           // Remove all elements
// dq.insert(it, val);   // Insert element at iterator position
// dq.erase(it);         // Erase element at iterator position
// dq.begin(), dq.end(); // Iterators for traversal

// Example Use Case:
// Deques are useful in problems like sliding window maximum,
// implementing queues or stacks with flexible front/back operations,
// and solving problems that need both-end access efficiently.
#include <iostream>
#include <deque>
using namespace std;

int main() {
    // Create an empty deque of integers
    deque<int> dq;

    // Insert elements at the back
    dq.push_back(10);   // dq: [10]
    dq.push_back(20);   // dq: [10, 20]

    // Insert elements at the front
    dq.push_front(5);   // dq: [5, 10, 20]

    // Print current deque
    cout << "Deque contents: ";
    for (const auto& elem : dq) {
        cout << elem << " ";
    }
    cout << endl;

    // Access front and back elements
    cout << "Front element: " << dq.front() << endl; // 5
    cout << "Back element: " << dq.back() << endl;   // 20

    // Remove elements from both ends
    dq.pop_front();   // dq becomes: [10, 20]
    dq.pop_back();    // dq becomes: [10]

    // Check if deque is empty
    if (dq.empty()) {
        cout << "Deque is empty!" << endl;
    } else {
        cout << "Deque is not empty, size = " << dq.size() << endl;
    }

    return 0;
}

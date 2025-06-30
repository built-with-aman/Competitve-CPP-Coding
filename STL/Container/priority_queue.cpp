//priority queue
// A priority queue is a data structure that stores elements in such a way that the 
// element with the highest priority is always at the front.
// It is implemented using the STL priority_queue container in C++.
// It provides functions to push elements onto the queue, pop elements off the queue,
// and access the top element of the queue.
// It is commonly used in scenarios where elements need to be processed based on their priority.
// Example usage: Implementing a task scheduler that processes high-priority tasks first.
// It can also be used in algorithms like Dijkstra's algorithm for finding the shortest path in a graph.
//time complexity of push pop and top is O(log n) and for size and empty is O(1).
// The priority queue is typically implemented as a max-heap, where the highest priority element is

#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(1);
    pq.push(3);
    pq.push(2); // push is used to add an element to the priority queue

    cout<<pq.top()<<endl; // top is used to access the highest priority element
    pq.pop(); // pop is used to remove the highest priority element

    cout<<pq.top()<<endl; // after popping, the new highest priority element is displayed
    cout<<pq.size()<<endl; // size is used to get the number of elements in the priority queue
    cout<<pq.empty()<<endl; // empty is used to check if the priority queue is empty
    return 0;
}
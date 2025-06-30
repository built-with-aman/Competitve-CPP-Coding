//queue
// queue is a container adapter that provides a FIFO (First In First Out) data structure.
// It allows insertion at the back and removal from the front.
// The queue is implemented using the STL queue container in C++.
// It provides functions to push elements onto the queue, pop elements off the queue,
// and access the front element of the queue.
// It is commonly used in scenarios where elements need to be processed in the order
// they were added.
// Example usage: Implementing a simple queue to manage tasks in a task scheduler.

#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3); // push is used to add an element to the back of the queue
    q.emplace(4); // emplace is used to construct an element in place

    cout<<q.front()<<endl; // front is used to access the front element of the queue
    q.pop(); // pop is used to remove the front element of the queue

    cout<<q.back()<<endl; // back is used to access the back element of the queue
    q.pop(); // pop is used to remove the front element of the queue again

    cout<<q.front()<<endl; // after popping, the new front element is displayed
    cout<<q.back()<<endl; // after popping, the new back element is displayed
    cout<<q.size()<<endl; // size is used to get the number of elements in the queue
    cout<<q.empty()<<endl; // empty is used to check if the queue is empty
    return 0;
}
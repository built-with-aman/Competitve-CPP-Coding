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
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Marks ke basis pe min heap banega
struct Compare {
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;
    }
};

int main() {
    // Priority queue with custom comparator
    priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;

    pq.push({1, 80}); // Roll 1, Marks 80
    pq.push({2, 50});
    pq.push({3, 60});

    while (!pq.empty()) {
        auto top = pq.top();
        cout << "Roll: " << top.first << ", Marks: " << top.second << endl;
        pq.pop();
    }

    return 0;
}

// map
// This code demonstrates the use of a map in C++.
// A map is a type of associative container that stores key-value pairs.
// It allows for fast access to values based on their keys.
// The code includes operations such as inserting values, accessing values, and iterating through the map
// It is commonly used in scenarios where key-value associations are needed.


#include <iostream>
#include <queue>
#include <map>
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

    // Map demonstration
    map<int, int> myMap;
    myMap[1] = 80;
    myMap[2] = 50;
    myMap[3] = 60;

    cout << "Iterating through the map in sorted order of keys:" << endl;
    for(auto it : myMap) {
        cout << "Key: " << it.first << ", Value: " << it.second << endl;
    }

    // we can also do erase, swap, clear, size, empty
    myMap.erase(2); // Erasing a key-value pair
    cout << "After erasing key 2:" << endl;
    for(auto it : myMap) {
        cout << "Key: " << it.first << ", Value: " << it.second << endl;
    }

    myMap.swap(myMap); // Swapping the map with itself (no effect)
    cout << "Size of map: " << myMap.size() << endl; // Getting the size of the map
    cout << "Is map empty? " << (myMap.empty() ? "Yes" : "No") << endl; // Checking if the map is empty

    return 0;
}
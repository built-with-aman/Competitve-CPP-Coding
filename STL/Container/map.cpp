// map
// This code demonstrates the use of a map in C++.
// A map is a type of associative container that stores key-value pairs.
// It allows for fast access to values based on their keys.
// The code includes operations such as inserting values, accessing values, and iterating through the map
// It is commonly used in scenarios where key-value associations are needed.

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> myMap;

    // Inserting values into the map
    myMap[1] = "One";
    myMap[2] = "Two";
    myMap[3] = "Three";

    // Accessing values
    cout << "Key 2: " << myMap[2] << endl;
    cout << "Key 3: " << myMap[3] << endl;

    auto it = myMap.find(1); // Finding a key
    if (it != myMap.end()) {
        cout << "Found key 1: " << it->second << endl;
    } else {
        cout << "Key 1 not found" << endl;
    }

    // iterating as in sorted order of keys
    for(auto it : myMap) {
        cout << "Key: " << it.first << ", Value: " << it.second << endl;
    }
    cout << "Iterating through the map:" << endl;
// we  can also do erase . swap, clear, size, empty
    myMap.erase(2); // Erasing a key-value pair
    cout << "After erasing key 2:" << endl;
    myMap.swap(myMap); // Swapping the map with itself (no effect)
    cout << "Size of map: " << myMap.size() << endl; // Getting the size of the map
    cout << "Is map empty? " << (myMap.empty() ? "Yes" : "No") << endl; // Checking if the map is empty
    return 0;
}
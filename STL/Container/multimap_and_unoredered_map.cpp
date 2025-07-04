// multimap & unordered map: This code demonstrates the use of multimap and unordered map in C++.
// A multimap is a type of associative container that allows multiple elements with equivalent keys.
// An unordered map is a type of associative container that uses a hash table for storage,
// allowing for fast access to elements based on their keys.
//time complexity of multimap is O(log n) for insertion, deletion, and search operations,
// as it is implemented using a balanced binary search tree (usually a red-black tree).
//time complexity in unordered map is O(1) on average for insertion, deletion, and search operations,
// but can degrade to O(n) in the worst case due to hash collisions.

#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
    // Multimap example
    multimap<int, string> myMultimap;
    myMultimap.insert({1, "One"});
    myMultimap.insert({2, "Two"});
    myMultimap.insert({2, "Deux"});
    myMultimap.insert({3, "Three"});

    cout << "Multimap contents:" << endl;
    for (const auto& pair : myMultimap) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }

    // Unordered map example
    unordered_map<int, string> myUnorderedMap;
    myUnorderedMap[1] = "One";
    myUnorderedMap[2] = "Two";
    myUnorderedMap[3] = "Three";

    cout << "Unordered map contents:" << endl;
    for (const auto& pair : myUnorderedMap) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }

    return 0;
}
//before learning about pair in STL, we need to understand the concept of pair in C++.
#include <iostream>
#include <utility> // for std::pair 
using namespace std;
int main() {
    // Creating a pair
    pair<int, string> p1; // Default constructor
    p1.first = 1;         // Assigning first element
    p1.second = "Apple";

 // Assigning second element
    cout << "Pair 1: " << p1.first << ", " << p1.second << endl;

    // Creating a pair using parameterized constructor
    pair<int, string> p2(2, "Banana");
    cout << "Pair 2: " << p2.first << ", " << p2.second << endl;

    // Using make_pair to create a pair
    auto p3 = make_pair(3, "Cherry");
    cout << "Pair 3: " << p3.first << ", " << p3.second << endl;

    //nested pair with parameterized constructor
    pair<int, pair<int, string>> nestedPair(1, make_pair(2, "Nested"));
    cout << "Nested Pair: " << nestedPair.first << ", ("
            << nestedPair.second.first << ", " 
            << nestedPair.second.second << ")" << endl;

// Accessing elements of a pair
    cout << "First element of Pair 1: " << p1.first << endl;
    cout << "Second element of Pair 2: " << p2.second << endl;

// pair array
    pair<int, string> pairArray[3] = {
        make_pair(1, "One"),
        make_pair(2, "Two"),
        make_pair(3, "Three")
    };
    cout << "Pair Array:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Pair " << i + 1 << ": " << pairArray[i].first 
             << ", " << pairArray[i].second << endl;
    }

    return 0;
}
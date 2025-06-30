//multiset
// A multiset is a type of associative container that allows multiple elements with equivalent values.
// It is similar to a set, but it allows duplicate elements.
// The elements in a multiset are always sorted in ascending order.
// It is implemented using the STL multiset container in C++.
// It provides functions to insert elements, remove elements, and search for elements.
// It is commonly used in scenarios where duplicate elements need to be stored and sorted.
// Example usage: Implementing a simple inventory system where multiple items of the same type can be stored.

#include <iostream>
#include <set>
using namespace std;    

void explainMultiset(){
    multiset<int> ms; // Declare a multiset of integers
    // Inserting elements into the multiset
    ms.insert(5);
    ms.insert(1);
    ms.insert(3);
    ms.insert(2);
    ms.insert(4);
    ms.insert(5); // Duplicate element, allowed in multiset

ms.erase(1);
int count = ms.count(5); // Count occurrences of 5
cout << "Count of 5: " << count << endl;

ms.erase(ms.find(5)); // Erase one occurrence of 5
cout << "Elements in multiset after erasing 1 and one occurrence of 5: ";
for (auto it = ms.begin(); it != ms.end(); ++it) {
    cout << *it << " "; // Print elements in the multiset
}
cout << endl;

// deletion of all occurrences of an element
ms.erase(5); // Erase all occurrences of 5
cout << "Elements in multiset after erasing all occurrences of 5: ";
for (auto it = ms.begin(); it != ms.end(); ++it) {
    cout << *it << " "; // Print elements in the multiset
}

ms.find(3); // Find an element in the multiset
cout << endl;
cout << "Size of multiset: " << ms.size() << endl; // Print size of the multiset
cout << "Is multiset empty? " << (ms.empty() ? "Yes" : "No") << endl; // Check if multiset is empty
cout << "First element in multiset: " << *ms.begin() << endl; //
}
int main()
{
    explainMultiset(); // Call the function to demonstrate multiset operations
    return 0;
}
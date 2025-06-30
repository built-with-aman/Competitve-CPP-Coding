//set
// A set is a container that stores unique elements in a specific sorted order.
// It does not allow duplicate elements and automatically sorts the elements in ascending order.
// no elements are allowed to be repeated.
// It is implemented using the STL set container in C++.
// It provides functions to insert elements, remove elements, and search for elements.
// It is commonly used in scenarios where duplicate elements need to be eliminated.
// Example usage: Implementing a simple contact list where each contact is unique.

#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3); // insert is used to add an element to the set

    auto it = s.find(2); // find is used to search for an element in the set

    cout<<*s.begin()<<endl; // begin is used to access the first element of the set
    s.erase(1); // erase is used to remove an element from the set

    int count = s.count(2); // count is used to check if an element exists in the set

   //iterator is used to traverse the set
   // it is a pointer-like object that points to an element in the set
   
    auto it = s.find(2); // find is used to search for an element in the set
    s.erase(it); // erase is used to remove the element found by find

    cout<<*s.begin()<<endl; // after erasing, the new first element is displayed
    cout<<s.size()<<endl; // size is used to get the number of elements in the set
    cout<<s.empty()<<endl; // empty is used to check if the set is empty
    return 0;
}
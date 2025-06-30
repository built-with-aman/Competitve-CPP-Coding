// Vector:
// STL vector is a sequence container representing an array that can change in size.
// It is a part of the C++ Standard Template Library (STL) and provides dynamic array functionality.


// int main(){
//    Syntax:
// vector<object_type> variable_name;
// Example:

// vector<int> v1;
// vector<char> v2;
// vector<string> v3;
// Most used functions in Vector:
// begin() - it returns an iterator pointing to the first element of the vector.
// auto iterator = itr;

// itr = v1.begin();
// end() - it returns an iterator pointing to the element theoretically after the last element of the vector.
// auto iterator = itr;

// itr = v1.end();
// push_back() - it accepts a parameter and insert the element passed in the parameter in the vectors, the element is inserted at the end.
// vector<int> v1;

// v1.push_back(1);
// v1.push_back(2);
// insert() - it is used to insert an element at a specified position.
// auto it= v1.begin();
// v1.insert(it,5); //inserting 5 at the beginning
// erase() - it is used to delete a specific element
// vector<int> v1;
// auto it= v1.begin();
// v1.erase(it);// erasing the first element
// pop_back() - it deletes the last element and returns it to the calling function.
// v1.pop_back();
// front() - it returns a reference to the first element of the vector.
// v1.front();
// back() - it returns a reference to the last element of the vector.
// v1.back();
// clear() - deletes all the elements from the vector.
// v1.clear();
// empty() - to check if the vector is empty or not.
// v1.empty();
// size() - returns the size of the vector
// v1.size();

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v;

  for (int i = 0; i < 10; i++) {
    v.push_back(i); // inserting elements in the vector
  }

  cout << "the elements in the vector: ";
  for (auto it = v.begin(); it != v.end(); it++)
    cout << *it << " ";
  // Output: the elements in the vector: 0 1 2 3 4 5 6 7 8 9

  cout << "\nThe front element of the vector: " << v.front();
  // Output: The front element of the vector: 0

  cout << "\nThe last element of the vector: " << v.back();
  // Output: The last element of the vector: 9

  cout << "\nThe size of the vector: " << v.size();
  // Output: The size of the vector: 10

  cout << "\nDeleting element from the end: " << v[v.size() - 1];
  // Output: Deleting element from the end: 9
  v.pop_back(); // removes last element (9)

  cout << "\nPrinting the vector after removing the last element:" << endl;
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  // Output: 0 1 2 3 4 5 6 7 8

  cout << "\nInserting 5 at the beginning:" << endl;
  v.insert(v.begin(), 5); // vector becomes: 5 0 1 2 3 4 5 6 7 8
  cout << "The first element is: " << v[0] << endl;
  // Output: The first element is: 5

  cout << "Erasing the first element" << endl;
  v.erase(v.begin()); // vector becomes: 0 1 2 3 4 5 6 7 8
  cout << "Now the first element is: " << v[0] << endl;
  // Output: Now the first element is: 0

  if (v.empty())
    cout << "\nvector is empty";
  else
    cout << "\nvector is not empty" << endl;
  // Output: vector is not empty

  v.clear(); // clears all elements
  cout << "Size of the vector after clearing the vector: " << v.size();
  // Output: Size of the vector after clearing the vector: 0

  v.erase(v.begin(), v.end()); // unnecessary; already empty
  cout << "\nSize of the vector after erasing all elements: " << v.size();
  // Output: Size of the vector after erasing all elements: 0

  // ⚠️ This will cause undefined behavior if v.size() < 10
  // Safe usage requires a check
  if (v.size() >= 10)
    v.erase(v.begin() + 1, v.begin() + 10);
  else
    cout << "\nCannot erase from index 1 to 9 — vector size too small.";
  // Output: Cannot erase from index 1 to 9 — vector size too small.

  v.shrink_to_fit(); // shrink capacity to fit current size
  cout << "\nSize of the vector after shrinking: " << v.size();
  // Output: Size of the vector after shrinking: 0
}


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
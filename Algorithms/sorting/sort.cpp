//sort 
// This file is part of the C++ Algorithms project.
// It explains what is sort and how to use it.
// The sort function is used to sort a range of elements in a container.
// It is a part of the C++ Standard Library and is defined in the <algorithm> header.

#include <bits/stdc++.h>
using namespace std;

// sort according to descending order
bool compare(pair<int, int> p1, pair<int, int> p2) {
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    
// they are equal, so we compare the first elements    
    if(p1.first>p2.first) return false;

    void explain_sort() {
        sort(a, a+n);
        sort(v.begin(), v.end());
        sort(v.begin(), v.end(), greater<int>());
// when you want to sort in these way defined by the compare function

sort(a,a+n,comp){
        sort(v.begin(), v.end(), comp);
    }
    return true;
}

        

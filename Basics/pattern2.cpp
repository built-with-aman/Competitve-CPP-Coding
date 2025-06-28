#include <iostream>
using namespace std;

// Function to print triangle pattern of 'n' rows
void print2(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);    // Read from input.txt
    freopen("output.txt", "w", stdout);  // Write to output.txt
#endif

    int t;
    cin >> t; // Read the number of test cases

    /*
    Why we write multiple inputs like this:
    
    Example input.txt:
    3       ← This means: run the pattern 3 times
    2       ← First pattern should be 2 rows high
    3       ← Second pattern should be 3 rows high
    4       ← Third pattern should be 4 rows high

    So:
    - First, t = 3 (3 test cases)
    - Then, in each iteration of the loop below, we read a new 'n' value and print that pattern
    */

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        print2(n);
    }

    return 0;
}

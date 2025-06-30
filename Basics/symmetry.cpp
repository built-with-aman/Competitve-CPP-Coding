#include <iostream>
using namespace std;

void symmetry(int n) {
    int iniS = 0;
    
    // Upper half
    for(int i = 0; i < n; i++) {
        // Print stars on left
        for(int j = 1; j <= n - i; j++) {
            cout << "*";
        }
        
        // Print spaces in the middle
        for(int j = 0; j < iniS; j++) {
            cout << " ";
        }
        
        // Print stars on right
        for(int j = 1; j <= n - i; j++) {
            cout << "*";
        }
        
        // Increase spaces by 2 for next row
        iniS += 2;
        
        cout << endl;
    }
    
    // Lower half
    iniS = 2 * n - 2;
    for(int i = 1; i <= n; i++) {
        // Print stars on left
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        
        // Print spaces in the middle
        for(int j = 0; j < iniS; j++) {
            cout << " ";
        }
        
        // Print stars on right
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        
        // Decrease spaces by 2 for next row
        iniS -= 2;
        
        cout << endl;
    }
}

int main() {
       #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);    // Read from input.txt
    freopen("output.txt", "w", stdout);  // Write to output.txt
#endif
    int n ;
    cin >> n;              // Make sure to give input here!
    symmetry(n);
    return 0;
}

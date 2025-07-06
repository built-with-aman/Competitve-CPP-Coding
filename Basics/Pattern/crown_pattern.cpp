#include <iostream>
using namespace std;

void numberCrown(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        int spaceCount = 2 * (n - i);
        for(int s = 1; s <= spaceCount; s++) {
            cout << "  ";
        }

        for(int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        cout << endl;
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);    // Read from input.txt
    freopen("output.txt", "w", stdout);  // Write to output.txt
#endif

    int n;
    cin >> n;              // Make sure to give input here!
    numberCrown(n);
    return 0;
}

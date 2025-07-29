#include <iostream>
#include <vector>
using namespace std;

void printAllSubarrays(vector<int> &arr) {
    int n = arr.size();

    // Subarray lengths from n to 1
    for (int len = n; len >= 1; len--) {
        cout << "Subarrays of length " << len << ":\n";

        // Traverse from 0 to n - len
        for (int start = 0; start <= n - len; start++) {
            int end = start + len - 1;

            // Print current subarray
            cout << "[ ";
            for (int i = start; i <= end; i++) {
                cout << arr[i] << " ";
            }
            cout << "]\n";
        }
        cout << "\n";
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4};

    printAllSubarrays(arr);

    return 0;
}

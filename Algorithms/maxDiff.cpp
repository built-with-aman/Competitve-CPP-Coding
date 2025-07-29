#include <bits/stdc++.h>
using namespace std;

int maxDiff(vector<int> &arr) {
    int n = arr.size();
    if(n < 2) return -1;

    int curr = arr[1] - arr[0];
    int maxSum = (curr > 0 ? curr : -1);

    for(int i = 1; i < n - 1; i++) {
        int diff = arr[i+1] - arr[i];
        curr = max(diff, curr + diff);
        if(curr > 0) maxSum = max(maxSum, curr);
    }

    return maxSum;
}

int main() {
    vector<int> arr = {2, 3, 10, 6, 4, 8, 1};
    cout << maxDiff(arr);
    return 0;
}

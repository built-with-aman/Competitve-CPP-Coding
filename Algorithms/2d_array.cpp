#include <iostream>
using namespace std;
void print2dArray(int arr[][3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
// Example usage of the function
    int main() {
        int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
        print2dArray(arr, 2);
        return 0;

}

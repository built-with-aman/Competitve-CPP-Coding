// using selection sort for descending number sort 
// #include <iostream>
// using namespace std;

// int main() {
//     int a[5] = {2, 3, 10, 8, 11};
//     int n = 5;

//     for(int i = 0; i < n - 1; i++) {
//         int maxIndex = i;
//         for(int j = i + 1; j < n; j++) {
//             if(a[j] > a[maxIndex]) {
//                 maxIndex = j;
//             }
//         }
//         // swap largest element found with a[i]
//         swap(a[i], a[maxIndex]);
//     }

//     cout << "Array sorted in descending order: ";
//     for(int i = 0; i < n; i++) {
//         cout << a[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
//----------------------------------------------------------------------------------------------------------

// print char in sorting order
#include<iostream>
using namespace std;

int main() {
    char arr[] = {'d', 'a', 'c', 'b'};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }

    cout << "Characters in sorted order: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

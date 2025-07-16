// we want to sort an array using selction sort 
// int arr[5]={9,4,19,8,2}
//index=   0 1 2 3 4

#include<iostream>
using namespace std;


int main(){
    int n = 5;
    int index; 
    int arr[5]={9,4,19,8,2};
    for(int i=0; i<n; i++){

        index = i;
        for(int j = i + 1; j < n; j++){
// sorting in descending order 
//    if (arr[j] > arr[index]){
//                 index = j;
//             }

            if (arr[j] < arr[index]){
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }

    // Print sorted array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


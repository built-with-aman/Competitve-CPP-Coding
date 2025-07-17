// practice question 1 
// Use Insertion Sort Algorithm to sort the array of integers in decreasing order.

// #include<iostream>
// using namespace std;

// int main(){
    
//     int arr[1000];
//     int n;
//     cout<<"enter the size of array ";
//     cin>>n;
//     for(int i=0; i<n; i++){
//     cin>>arr[i];
//    }


//    for (int i = 1; i < n; i++)  // Start from the 2nd element (index 1) : kyuki pahla wala compare nai karppayega ascending me 
//    {
//      // Why j=i? 
//      //The element at index 'i' is the one we want to insert into the sorted part (from 0 to i-1)
//     for (int j = i; j>0; j--)
//     { 
//          // Compare the current element arr[j] with the previous one arr[j - 1] , yaha greater than use kia h adescending k lia 
//         if(arr[j]>arr[j-1])
//         swap(arr[j],arr[j-1]);
//         else 
//         break; // If the current element is in correct position, no more shifting needed
//     }
 
// }
//    for(int i=0; i<n; i++){
//     cout<< arr[i] << " ";
//    }
   
//      return 0;
// }
//---------------------------------------------------------------------------------------------------------------------------
// practice question 2
// Insertion Sort Algorithm to sort the array of integers in increasing order if we start from the last element of the array. 


#include<iostream>
using namespace std;

int main(){
    int n; 
    int arr[1000];
    cout << " enter the size of your array" << endl;
    cin >> n;

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }


    for(int i= n-2; i>=0; i--){
        for(int j=i; j<n-1; j++){
            if(arr[j]>arr[j+1])
        swap(arr[j],arr[j+1]);
        else 
        break;

        }
    }
    cout<<"your sorted array is "<< endl;
      for(int i=0; i<n; i++){
    cout<< arr[i] << " ";
   }
     return 0;
}
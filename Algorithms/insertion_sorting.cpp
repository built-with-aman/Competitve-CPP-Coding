//insertion sort example 

#include<iostream>
using namespace std;

int main(){
    
    int arr[1000];
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    for(int i=0; i<n; i++){
    cin>>arr[i];
   }


   for (int i = 1; i < n; i++)  // Start from the 2nd element (index 1) : kyuki pahla wala compare nai karppayega ascending me 
   {
     // Why j=i? 
     //The element at index 'i' is the one we want to insert into the sorted part (from 0 to i-1)
    for (int j = i; j>0; j--)
    { 
         // Compare the current element arr[j] with the previous one arr[j - 1]
        if(arr[j]<arr[j-1])
        swap(arr[j],arr[j-1]);
        else 
        break; // If the current element is in correct position, no more shifting needed
    }
 
}
   for(int i=0; i<n; i++){
    cout<< arr[i] << " ";
   }
   
     return 0;
}


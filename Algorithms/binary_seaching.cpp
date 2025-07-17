// 💡 Binary Search Algorithm

// 🔹 Binary Search is a searching algorithm used to find the position of a target value in a **sorted array**.

// 🔹 It works by repeatedly dividing the search interval in half.
//    → If the target value is equal to the middle element, the search is successful.
//    → If the target is smaller, search continues on the left half.
//    → If the target is larger, search continues on the right half.

// 🔹 Binary Search reduces the time complexity from O(n) (linear search) to O(log n).

// 🔹 It is much faster than linear search for large datasets — but it only works on **sorted** arrays.

// ✅ Time Complexity: O(log n)
// ✅ Space Complexity: O(1) for iterative version

// ⚠️ Important:
//    - Binary Search only works if the array is sorted (either ascending or descending).
//    - Indexing must be carefully managed to avoid infinite loops or wrong results.


#include<iostream>
using namespace std;

int main(){
    int n;
    int arr[1000];
      cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the sorted array elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int start = 0 , end =n-1;
    int mid, key;


    cout<< "please enter the element you want to search for " << endl;
    cin>>key;
    bool found = false; // to track if the key is found
    while(start<=end)
    {
        mid= (start+end)/2;

        if(arr[mid]== key)
        {
            cout<<"your key is at index of : " << mid <<endl;
            
            break; 
        }
        else if(arr[mid]<key){
            start= mid+1; // search in right half
        }
        else 
        {

         end= mid-1; // search in left half

        }

    }

 if (found == false )
{
    cout<<" sorry your key elements is not in the array "<< endl;

}
     return 0;
}
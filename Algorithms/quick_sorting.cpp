#include<iostream>
using namespace std;
int partition(int arr[], int start, int end){
    int position=start;
    for(int i=start; i<=end; i++){
        if(arr[i]<=arr[end]){
            swap(arr[i], arr[position]);
            position++;
        }

    }
     swap(arr[position], arr[end]); // place pivot at correct position
    return position-1;
}

void quicksort(int arr[], int start , int end){ 
 if(start >= end) return; 
    int pivot = partition(arr, start, end);
    // left 
 quicksort(arr,start , pivot -1);
 
 //right 
 quicksort(arr,pivot , end);
}

int main(){
    int arr[]={19,3,4,5,62,11,10,9,1};
    quicksort(arr,0,8);
    for(int i=0; i<=9 ; i++){
        cout<<arr[i]<<" ";
    }
     return 0;
}
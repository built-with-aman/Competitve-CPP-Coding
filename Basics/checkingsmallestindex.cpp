// check which element of array has the smallest index

#include<iostream>
#include<vector>
using namespace std;

int indexsmallest(const vector<int>& arr){
   if(arr.empty()){
    return -1; // exception case
   }
   int smallest=arr[0];
   int index=0;
  
   for(int i=1; i<arr.size(); i++){
    if(arr[i]<smallest){
        smallest= arr[i];
        index=i;
    }
   }
   return index;
}

int main(){
    vector<int> numbers={2,3,4,7,1};
    int idx = indexsmallest(numbers);
    if (idx !=-1){
        cout<<"index of smallest element : "<<idx<<endl;
        cout<<"smallest element is : "<<numbers[idx]<<endl;
        
    }else{
        cout<<"array is empty" <<endl;
    }
    return 0;
}

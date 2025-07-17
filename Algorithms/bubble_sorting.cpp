#include <iostream>
using namespace std;

int main() {
    int n;
   
    int arr[1000];
    cout<<"enter the size of array " <<endl ;
    cin>>n; 
    cout<<"please enter you elements " <<endl;

    for (int i=0; i<n; i++)
{
    cin>>arr[i];
    cout<<endl;

}
// Bubble Sort
    
for (int i=n-2 ; i>=0; i--)
{
    bool swapped=0;
    for(int j= 0; j<=i ; j++){
        if (arr[j]>arr[j+1]){
            swapped=1;
            swap(arr[j], arr[j+1]);
        }
    }
if (swapped==0){
    cout<<"array is already sorted" <<endl;
    break;
}
}
cout<<"soted array is "<<endl;
  for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
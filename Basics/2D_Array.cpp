#include<iostream>
using namespace std;
//basic glimpse of 2D Array 
int main(){
      #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int arr[3][5];
    arr[1][3]=90;
    cout<<arr[1][3];
    //note : if try to print any value other then what we have assigned , we will get garbage value
     return 0;
}
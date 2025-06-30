#include<iostream>
using namespace std;

// array elements are stored in consequetive memory loction
//but it is not sure where is the starting element a[0] , it can be any where randomized
// 1D ARRAY :
int main(){
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int arr[5];
    cin>> arr[0] >> arr[1]>> arr[2] >> arr[3];
   
    // cout<< arr[3];
    // now we can update change or delete arr[3], 
    arr[3] +=19;
    cout<< arr[3]; // if inputarr[3]=31, output 31+19 =50 
    
     return 0;
}
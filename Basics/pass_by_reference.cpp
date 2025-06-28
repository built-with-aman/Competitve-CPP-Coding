//when you want to make changes in the original one not in copy
#include<iostream>
using namespace std;

//& sign is used for taking the value from the address so , original value will be taken not the copy
/*
void dosomething(string &A){
    A[0]='T';
    cout<<A<<endl;
}
int main (){
    
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

string A="OOMER";
dosomething(A);

cout<<endl<<A<<endl;
}

*/

//pass by refernce in array , they don't use &
void dosomething(int arr[], int n){
    arr[0] +=100;
    cout<<"value inside function :"<<arr[0]<<endl;
}
int main (){
    
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

int n=5;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];

}

dosomething(arr , n);
cout<<"value inside int main"<<arr[0]<<endl;
}

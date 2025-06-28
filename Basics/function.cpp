#include<iostream>
using namespace std;
// functions are set of code which perform something for you.
// function are used to modularise code.
// function are used to increase readability.
// function are used to use same code multille times.
// commonly used functions :-
// void : does not return anything
// return
// parmeterised
// non-parameterised
// void printname(){
//     cout<<"hey AMAN";  // this is void function it want do any thing
//     }
// int main(){
//     printname(); // we calling void function , then print will occur
//      return 0;
// }

//what if we want to give parameter
//parameterised void

void printnames(string names){
    cout<<" hey "<<names <<endl;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string name1;
    cin>>name1;
    printnames(name1); // we calling void function , then print will occur

    string name2;
    cin>>name2;
    printnames(name2);

     return 0;
}
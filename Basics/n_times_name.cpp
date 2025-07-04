// using recursion to print name n times
// what is recursion?
// Recursion is a programming technique where a function calls itself to solve a problem.   
// It is often used to solve problems that can be broken down into smaller, similar subproblems.
// In this case, we will use recursion to print a name n times.

#include<iostream>
using namespace std;

void printName(int n){
    if(n==0) return;
    cout<<"Your Name"<<endl;
    printName(n-1); 
}

int main(){
    int n;
    cout << "Enter the number of times to print your name: ";
    cin >> n;
    printName(n);
    cout << "Name printed " << n << " times." << endl;

    
     return 0;
}
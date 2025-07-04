// printing numbers from n to 1
//using recursion to print numbers from n to 1
#include<iostream>
using namespace std;

/*

void printnumber1(int n, int i){
    if (i<1){
        return; // base case: if i is less than 1, we stop the recursion
    }
    cout << i << " ";
    printnumber1(n, i - 1);
}

*/


// USING BACKTRACKING 
// considering we want output from n to 1
// we can first call the function with n and then print the number after the recursive call
void printnumber2(int n, int i){
    if (i < 1) {
        return; // base case: if i is less than 1, we stop the recursion
    }
    printnumber2(n, i - 1); // first call the function with i-1 (backtracking)
    cout << i << " "; // print the current number after the recursive call
}

int main(){
    int n;
    cin >> n;
    cout << "Printing numbers from " << n << " to 1:" << endl;
    printnumber2(n, n); // starting from n to 1
    cout << endl; // to add a new line after printing all numbers   
    return 0;
}
// THE OUTPUT OF THIS CODE AFTER COMMENTING OUT printnumber2() WILL BE FROM N TO 1
// Example: if n is 5, the output will be 5 4 3 2 1
// This is because we are printing the number after the recursive call, which means we are printing the numbers in reverse order.
// IF WE CALL printnumber2() FUNCTION ,MY  OUTPUT IS FROM 1 TO N ?
// This is a common technique in recursion called backtracking, where we explore all possibilities and then backtrack to find the solution. 
// In this case, we are exploring the numbers from n to 1 and then printing them in reverse order.
// This technique is useful in many problems where we need to explore all possibilities and then backtrack to find the solution.
// This code is a simple example of how to use recursion to print numbers from n to 1.
// It demonstrates the concept of backtracking in recursion, where we explore all possibilities and then backtrack to find the solution.
// Recursion is a powerful technique that can be used to solve many problems in programming.
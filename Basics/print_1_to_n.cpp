//printing numbers from 1 to n
#include <iostream>
using namespace std;        
// Function to print numbers from 1 to n
void printnumber1(int i ,int n)
{
    // i is the current number to print
    // n is the limit up to which we want to print numbers
    // base case: if i is greater than n, we stop the recursion
    // this is the condition that will stop the recursion
    // if we don't have this condition, the function will keep calling itself indefinitely
    if (i > n) {
        return;
    }

    cout << i << " ";
    // means we are calling the function again with i incremented by 1
    printnumber1(i + 1, n); 
}
// function calling
int main(){
    int n;
    cin>> n;
    cout << "Printing numbers from 1 to " << n << ":" << endl;
    printnumber1(1, n); // starting from 1 to n
}
// Output will be numbers from 1 to n
// Example: if n is 5, the output will be 1 2 3 4 5

/************************************************************************************************** */

// Comment out the above code (either the first or second main function) to avoid multiple definition errors.
// Only one main() function should be active at a time to see the output for that part.
// LETS USE BACKTRACING TO PRINT NUMBERS FROM 1 TO N
#include <iostream>
using namespace std;
void printnumbers2(int i, int n)
{
    // base case: if i is greater than n, we stop the recursion
    if (i > n) {
        return;
    }
    // first call the function with i+1 (backtracking)
    printnumbers2(i + 1, n);
    cout << i << " "; // print the current number after the recursive call
}

// FUNCTION CALLING
int main() {
    int n;
    cin >> n;
    cout << "Printing numbers from 1 to " << n << " using backtracking:" << endl;
    printnumbers2(1, n); // starting from 1 to n
    cout << endl; // to add a new line after printing all numbers
    return 0;
}
// sum of n numbers using recursion and parameters
#include<iostream>
using namespace std;
// using PARAMETERISED RECURSION TO PRINT SUM OF N NUMBERS
// this function will print the sum of n numbers from 1 to n
int sum_n_num(int n, int i) {
    if (i > n) {
        return 0;
    }
    int result = i + sum_n_num(n, i + 1);
    cout << result << " ";
    return result;
}



// USING FUNCTION TO RETURN FINAL VALUE OF SUM OF N NUMBERS
// this function will print the sum of n numbers from 1 to n
void sum_of_n_num(int i , int sum)
{
    if (i<1)
    {
        cout<<"sum of n numbers is: "<<sum<<endl;
    }
    else 
    {
        sum_of_n_num(i-1, sum+i);
    }
}
// this only return final value of sum of n numbers

int main(){
    int n = 5; // Example value, you can change as needed
    sum_n_num(n, 1);
    cout << endl; // To add a new line after printing all numbers
    sum_of_n_num(n, 0);
    cout << endl; // To add a new line after printing the final sum
    return 0;

}
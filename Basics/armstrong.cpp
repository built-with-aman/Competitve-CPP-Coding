//armastrong number 
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int armstrong(int x) {
        int sum = 0;
        int original = x;
        while (x != 0) {
            int digit = x % 10;
            x /= 10;
            // sum += digit * digit * digit; 
            sum = sum + pow(digit, 3); // Using pow to calculate the cube of the digit
        }
        return sum == original;
    }
};

int main(){
    Solution s;
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    if(s.armstrong(number)){
        cout<<number<<" is an armstrong number."<<endl;
    }
    else {
        cout<<number<<" is not an armstrong number."<<endl;
    }
}
#include <iostream>
using namespace std;

int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        // n=n/10;
        n /= 10; //means we are dividing the number by 10 to remove the last digit
    }
    return count;
}

int main() {
    int number = 12345;
    int digitCount = countDigits(number);
    cout << "Number of digits in " << number << " is: " << digitCount << endl;
    return 0;   
}

time complexity: O(log n) because we are dividing the number by 10 in each iteration
// space complexity: O(1) because we are using a constant amount of space
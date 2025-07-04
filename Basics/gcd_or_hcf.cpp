// finding hcf/gcd of two numbers
#include <iostream>
using namespace std;
/*
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Finding HCF/GCD
    int hcf;
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    cout << "HCF/GCD of " << a << " and " << b << " is " << hcf << endl;
    return 0;
}

*/

// but this is not the most efficient way to find hcf/gcd
// we can use the Euclidean algorithm which is much more efficient
// The Euclidean algorithm is based on the principle that the GCD of two numbers also divides their difference.
// The algorithm works as follows:
// 1. If b is 0, then GCD(a, b) = a.
// 2. Otherwise, GCD(a, b) = GCD(b, a % b), where % is the modulus operator.
// This process is repeated until b becomes 0, at which point a will be the GCD.
#include <iostream>
using namespace std;
// int gcd(int a, int b) {
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }

// but to optimize the code further
int gcd(int a, int b)
{
    while(a>0 && b>0){
        if(a>b)
            a=a%b;
        else
            b=b%a;
    }

if(a==0)  return b;
 return a;
}

// main call
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int hcf = gcd(a, b);
    cout << "HCF/GCD of " << a << " and " << b << " is " << hcf << endl;
    return 0;
}

// now the time complexity is O(log(min(a, b))) because the algorithm reduces the problem size by half in each iteration.
// This is much more efficient than the previous method, especially for large numbers.
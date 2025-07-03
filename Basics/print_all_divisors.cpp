// means to find all divisors of a number ,for exqmple 12 has divisors 1, 2, 3, 4, 6, 12
// the question is very simple, we just need to iterate from 1 to n and check if n is divisible by i, if it is then i is a divisor of n

/*#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter your number :";
    cin>>n;
    cout<<"the divisors of " <<n<< " are: ";
    for(int i=1; i<=n;i++){
        if (n%i==0)
            cout<<i<<", ";

    }
    cout<<endl;
    return 0;
}
*/
// time complexity is O(n) because we are iterating from 1 to n
// lets say we have to reduce time complexity 
// we can iterate from 1 to sqrt(n) and check if n is divisible by i, if it is then i is a divisor of n
// and n/i is also a divisor of n, this will reduce time complexity to O(sqrt(n))   
// but we need to be careful about perfect squares, if n is a perfect square then we should not print n/i again
#include<cmath>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printDivisors(int n) {
                vector<int> divisors;
                //this is a great way , but is has floating point error 
                // for(int i=1; i<=sqrt(n);i++){ 
                //     if (n%i==0){
                //         divisors.push_back(i);
                //         if (i != n/i) // to avoid printing the square root twice
                //             divisors.push_back(n/i);
                //     }
                // }


                // we use i*i<=n instead of i<=sqrt(n) to avoid floating point error
                
                for (int i=1; i*i<=n; i++) {
                    if (n % i == 0) {
                        divisors.push_back(i);
                        if (i != n / i) // to avoid printing the square root twice
                            divisors.push_back(n / i);
                    }
                }
                //O(sqrt(n) * log(sqrt(n))) to sort the divisors
                // we can use sort function from algorithm library to sort the divisors
                sort(divisors.begin(), divisors.end());
                for (int i = 0; i < divisors.size(); i++)
                    cout << divisors[i] << ", ";
                }
            
// time complexity is O(sqrt(n) * log(sqrt(n))) because we are sorting the divisors
int main(){
    int n;
    cout<<"enter your number :";
    cin>>n;
    cout<<"the divisors of " <<n<< " are: ";
    printDivisors(n);
    return 0;
}


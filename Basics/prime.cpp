#include <iostream>
#include <vector>
using namespace std;
//time 
vector<int> primeNumbersTillN(int N) {
    vector<bool> isPrime(N + 1, true);
    vector<int> primes;

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= N; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= N; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= N; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }

    return primes;
}

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    vector<int> primes = primeNumbersTillN(N);

    cout << "Prime numbers up to " << N << " are: ";
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}
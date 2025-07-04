// printing numbers from n to 1
//using recursion to print numbers from n to 1

#include<iostream>
using namespace std;
void printnumbers(int n, int i){
    if (i<1){
        return; // base case: if i is less than 1, we stop the recursion
    }
    cout << i << " ";
    printnumbers(n, i - 1);
}

int main(){
    int n;
    cin >> n;
    cout << "Printing numbers from " << n << " to 1:" << endl;
    printnumbers(n);
    return 0;
}
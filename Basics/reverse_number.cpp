#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            int digit = x % 10;
            x /= 10;

            // Check for overflow before it happens
            if (rev > INT_MAX/10 || (rev == INT_MAX/10 && digit > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN/10 && digit < -8)) return 0;

            rev = rev * 10 + digit;
        }
        return rev;
    }
};

int main(){
    //calling function 
    Solution s;
    int number ;
    cout<<"enetr a number ";
    cin>>number;
    int reversenumber =s.reverse(number);
    cout<<"your reversed number is"<<reversenumber<<endl;
   
return 0;
}
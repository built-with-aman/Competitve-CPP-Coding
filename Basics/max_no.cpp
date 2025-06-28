#include <iostream>
using namespace std;
void maxx(int num1, int num2){
    if(num1>=num2){
        cout<<num1<<" is greater"<<endl;
    }
else{
    cout<<num2<<" is greater"<<endl;
};
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

  int num1, num2;
    cin >> num1 >> num2;  // Take input from input.txt

    maxx(num1, num2);     // Correct function call with arguments

    return 0;
}

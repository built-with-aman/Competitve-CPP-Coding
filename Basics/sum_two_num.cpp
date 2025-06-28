#include<iostream>
using namespace std;
//we can do this using void also void function , and istead of return there will be a cout
int sum(int num1,int num2){  // modularising
    int num3=num1+num2;
    return num3;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

/*
int num1, num2;
cin>>num1>>num2;
int sum=num1+num2;
cout<<"sum = "<<sum;
*/

// now suppose you have to perform addition operation multiple times
//then for that we will have to modularise the code 
int num1, num2;
cin>>num1>>num2;
int res=sum(num1,num2);
cout<<res;

return 0;
}

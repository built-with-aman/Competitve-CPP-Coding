#include<bits/stdc++.h>
using namespace std;

//write a program that takes an input of age
//and prints if you are adult or not

int main(){
   #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int age;
cin>>age;
if (age>=18){
cout<<"you are an adult"<<endl;
}
else{
    cout<<"you are not an adult"<<endl;
}
     return 0;
}
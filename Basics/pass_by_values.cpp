#include<iostream>
using namespace std;

//pass by value : it use the copy of our no does not change the orginal number
void dosomething(int num)
{
    cout<<num<<endl;
    num +=5;
    cout<<num<<endl;
    num +=25;
    cout<<num<<endl;
   
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

int num=10;
dosomething(num);

// so if we call our num 
cout<<endl;
cout<<"original number remained unchanged : "<<num<<endl;

     return 0;
}

// similarly i can use pass by value in strings

 /*
 
 void dosomething(string A){
    A[0]='T';
    cout<<A<<endl;
 }
 int main (){
    string A="OOMER";
    dosomething(A);
      
    cout<<endl<<A<<endl;
 }

 output: TOMER
*/
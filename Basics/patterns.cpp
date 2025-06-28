// pattern- use nested loops
//steps thta you should wrie to solve pattern problem :
// for outer loops - count number of lines
// for inner loops - focus on the coloumns & connect them somehow to rows
// whatever you are printing print them inside the inner for loop
// obeserve symmetry for certain pattern

// let say we want to create 
// Pattern 1
// ****
// ****
// ****
// ****

// sol
// count the number of lines - 4, so outer loop will run for 4 times
#include<iostream>
using namespace std;


// int main(){
//     #ifndef ONLINE_JUDGE
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
// #endif
// for(int i=0; i<4;i++){
//     for(int j=0; j<4;j++){  // whenever i=0 , j=0,1,2,3 , similarly for i=1, i=2, i=3, j will be =0,1,2,3
// cout<<"*";
//     }
//     cout<<endl;
// }
// }

//instead of solving this noramlly lets use void functionn 
// so that we can use the code forn as many lines as we want using our input
void printx(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           cout<<"%";
        }
        cout<<endl;
    }
    
}
int main(){
       #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
int n;
cin>>n;
    printx(n);
}
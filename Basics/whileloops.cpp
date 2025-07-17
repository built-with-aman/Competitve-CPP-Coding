#include <iostream>
using namespace std;

// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    // int i=1;
    // while(i<=6){
    //     cout<<"AMAN SONI "<<i<<endl;
    //     i=i+1;
    // }

    // do while
    //  execute the first time irrespective of whatever condition you are giving
//     int i = 2;
//     do
//     {
//         cout << "Learning " << i << endl;
//         i = i + 1;
//     } while (i <= 1);

//     cout << " i at ending " << i << endl;

//     return 0;
// }

// while loops programs
// program 1 : 
int main(){
    int n;
     cout<< "enter the number for which you want to print table " <<endl;
     cin>>n;
     int i=1; 
     cout<<" your table is " <<endl;
     while(i<=10){
        cout<<n*i<<endl;
        i++;
        

     }
     return 0;
}
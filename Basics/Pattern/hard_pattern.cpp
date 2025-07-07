#include <iostream>
using namespace std;
//pattern 1
//     * 
//    **
//   ***
//  ****
// *****

// int main() {
//     int row, col;
   
//     for (row = 1; row <= 5; row++) {
//         int space = 5 - row;
//         for (int i = 1; i <= space; i++) {
//             cout << " ";
//         }
        
//         for (col = 1; col <= row; col++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------------------------
// pattern 2;
//    1 
//   22
//  333
// 4444

// int main() {
//     int row, col;
   
//     for (row = 1; row <= 4; row++) {
//         int space = 5 - row;
//         for (int i = 1; i <= space; i++) {
//             cout << " ";
//         }
        
//         for (col = 1; col <= row; col++) {
//             cout << row;
//         }
//         cout << endl;
//     }
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------------------------
// pattern 3: 
//     a 
//    b c
//   d e f
//  g h i j
// k l m n o


// int main(){
//     int row , col;
//     char ch='a';
//     for(row =1 ; row<=5 ; row++){
//         int space = 5-row;
//         for (int sp=1; sp<=space; sp++){
//             cout<<" ";
//         }
//         for (col=1; col<=row; col++){
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
// }

//--------------------------------------------------------------------------------------------------------------------------
// pattern 4:
//                                         
//     a 
//    b b
//   c c c
//  d d d d
// e e e e e

// int main(){
//     int row , col;
//     char ch='a';
//     for(row =1 ; row<=5 ; row++){
//         int space = 5-row;
//         for (int sp=1; sp<=space; sp++){
//             cout<<" ";
//         }
//         for (col=1; col<=row; col++){
//             cout<<ch<<" ";
            
//         }
//         cout<<endl;
//         ch=ch+1;
//     }
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------------------------
// pattern 5:
//         a 
//       a b
//     a b c 
//   a b c d 
// a b c d e

/*
int main(){
    int row , col;
    char ch='a';
    
    for (row = 1; row <= 5; row++) {
        int space = 5 - row;
        
        // print leading spaces
        for (int sp = 1; sp <= space; sp++) {
            cout << "  "; // 2 spaces for better alignment
        }
        
        char ch = 'a';
        // print characters a to a+row-1
        for (col = 1; col <= row; col++) {
            cout << ch << " ";
            ch++;
        }
        
        cout << endl;
    }
    
    return 0;
}

*/
//-------------------------------------------------------------------------------------------------------------------------
// pattern 6:

//      *
//     ***
//    *****
//   ******* 
//  *********
// ***********

// int main(){
//     int row , col;
//     for(row=1; row<=6; row++){

//         int space ;
//         for (space=1; space<=6-row ; space++)
//         {
//             cout<<" ";
          
//         }
        
//             for(col=1; col<=2*row -1; col++){
//             cout<<"*";
//             }
//              cout<<endl;

//         }
//         return 0;
    
//     }

//---------------------------------------------------------------------------------------------------------------------
//pattern 7:
//      * * * * * * 
//     * * * * * * 
//    * * * * * * 
//   * * * * * * 
//  * * * * * *
// * * * * * *
// int main(){
//     int row , col;
//     for(row=1; row<=6; row++){

//         int space ;
//         for (space=1; space<=6-row ; space++)
//         {
//             cout<<" ";
          
//         }
        
//             for(col=1; col<=6; col++){
//             cout<<"* ";
//             }
//              cout<<endl;

//         }
//         return 0;
    
//     }

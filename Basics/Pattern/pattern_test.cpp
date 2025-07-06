

#include <iostream>
using namespace std;
// First Pattern:

//  1
//  1 2
//  1 2 3
//  1 2 3 4
//  1 2 3 4 5
//  1 2 3 4 5 6
//  1 2 3 4 5 6

// int main(){
//     int row, col;
//     for(row = 1; row <= 5; row++){
//         for(col = 1; col <= row; col++){
//             cout << col << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//---------------------------------------------------------------------------------------------------------

// Second Pattern:
//  A
//  A B
//  A B C
//  A B C D
//  A B C D E
//  A B C D E F

// int main(){
//     char ch;
//     int row, col;
//     for(row=1; row<=6; row++){
//         ch='A';
//         for(col =1; col<=row; col++){
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
//      return 0;
// }
//---------------------------------------------------------------------------------------------------------

// Third Pattern:
//    10
//    10 11
//    10 11 12
//    10 11 12 13
//    10 11 12 13 14
//    10 11 12 13 14 15

//     int main(){
//         int row, col;
//         for(row = 10; row <= 15; row++){

//     for(col=10; col<=row;col++){
//         cout<< col << " ";

//     }
//     cout << endl;
// }
// return 0;
// }

//---------------------------------------------------------------------------------------------------------

// Fourth Pattern:

//       A B C D
//       A B C
//       A B
//       A

// #include<iostream>
// using namespace std;

// int main(){
//     int row, col;
//     char ch;
//     for(row=4; row>=1; row--){
//         ch='A';
//         for (col=1; col<=row; col++){
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }

//     return 0;

// }

// pattern 5
// a
// b c
// c d e
// d e f g
// e f g h i

// int main()
// {int row , col;
//     for (row=1 ; row<=5; row =row+1){
//         char ch= 'a'+ row-1;
//         for(col=1; col<=row; col++)
//         {
//             cout << ch << " ";
//             ch++;
//         }
// cout<< endl;
//     }
// }

// pattern 6:
// a
// b b
// c c c
// d d d d
// e e e e e
// f f f f f f

// int main()

// {int row , col;
//     for (row=1 ; row<=6; row++){
//         char ch= 'a'+ row-1;
//         for(col=1; col<=row ; col++)
//         {
//             cout << ch << " ";

//         }
// cout<< endl;

// }
//     return 0;
// }

// pattern 7:

// ######
// #####
// ####
// ###
// ##
// #

int main(){
    int row, col;
    for (row=6 ; row>=1; row--){
        for(col=1; col<=row; col++){
            cout<<"# ";

        }
        cout << endl;
    }
    return 0;
}
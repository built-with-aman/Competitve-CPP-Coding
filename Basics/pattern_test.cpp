// First Pattern:
       
    //  1
    //  1 2
    //  1 2 3
    //  1 2 3 4
    //  1 2 3 4 5 
    //  1 2 3 4 5 6 
    //  1 2 3 4 5 6
       

// #include<iostream>
// using namespace std;

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

//Second Pattern:
   
    // A
    // A B
    // A B C
    // A B C D
    // A B C D E
    // A B C D E F

    // #include<iostream>
    // using namespace std;
    
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

//     #include<iostream>
//     using namespace std;
    
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


#include<iostream>
using namespace std;

int main(){
    int row, col;
    char ch;
    for(row=4; row>=1; row--){
        ch='A';
        for (col=1; col<=row; col++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;   
    
}
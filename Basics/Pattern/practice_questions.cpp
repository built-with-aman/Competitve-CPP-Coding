// check out solutions at the end of all questions
#include <iostream>
using namespace std;
/*
pattern 1:

5                 5
4 5             5 4
3 4 5         5 4 3
2 3 4 5     5 4 3 2
1 2 3 4 5 5 4 3 2 1

pattern 2:
5                 5
4 5             5 4
3 4 5         5 4 3
2 3 4 5     5 4 3 2
1 2 3 4 5 5 4 3 2 1
2 3 4 5     5 4 3 2
3 4 5         5 4 3
4 5             5 4
5                 5


pattern 3:
a)
*********
 *******
  *****
   ***
    *

b)

4               4
3 4           4 3
2 3 4       4 3 2
1 2 3 4 5 4 3 2 1
2 3 4       4 3 2
3 4           4 3
4               4


pattern 4: palindromic pyramid

        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5

pattern 5: hollow diamond

    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *


pattern 6: pascals triangle
      1
     1 1
    1 2 1
   1 3 3 1
  1 4 6 4 1

pattern 7: inverted pascals triangle
  1 4 6 4 1
   1 3 3 1
    1 2 1
     1 1
      1


pattern 8: Zigzag Number Pattern
1       2
  3   4
    5
  6   7
8       9

Pattern 9: Hourglass Pattern
*********
 *     *
  *   *
   * *
    *
   * *
  *   *
 *     *
*********
pattern 10: 0-1 Pattern triangle
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

PATTERN 11: u shaped pattern

*       *
*       *
*       *
*       *
* * * * *

pattern 12: Hollow dimonond in sqaure

* * * * * * * *
* * *     * * *
* *         * *
*             *
* *         * *
* * *     * * *
* * * * * * * *

pattern 13: Diamond

   *
  * *
 * * *
* * * *
 * * *
  * *
   * 

*/
//------------------------------------------------------------------------------------------------------------------------
// Solutions
// pattern 1

/*
int main(){
  int num, space, row;
  for(row=5; row>=1; row--){
    for(num=row; num<=5; num++){
      cout<<num << " ";
    }

    for (space = 1; space <= 2 * (row - 1); space++) {
      cout << "  ";
    }
    for(num=5; num>=row; num--){
      cout<<num << " ";
    }
    cout<<endl;
  }
  return 0;
}
------------------------------------------------------------------------------------------------------------------------
pattern 2:
int main() {
  int row, col, space;

  // Upper half
  for (row = 5; row >= 1; row--) {
    // Left numbers
    for (col = row; col <= 5; col++) {
      cout << col << " ";
    }

    // Spaces
    for (space = 1; space <= 2 * (row - 1); space++) {
      cout << "  ";
    }

    // Right numbers
    for (col = 5; col >= row; col--) {
      cout << col << " ";
    }

    cout << endl;
  }

  // Lower half
  for (row = 2; row <= 5; row++) {
    // Left numbers
    for (col = row; col <= 5; col++) {
      cout << col << " ";
    }

    // Spaces
    for (space = 1; space <= 2 * (row - 1); space++) {
      cout << "  ";
    }

    // Right numbers
    for (col = 5; col >= row; col--) {
      cout << col << " ";
    }

    cout << endl;
  }

  return 0;
}
--------------------------------------------------------------------------------------------------------------------------
pattern 3
a)
int main()
{
  int row ,col;
  int n;
  cout<<"enter the input:";
  cin>>n;

  for(row=n; row>=1;row--){
    for(col=1; col<=n-row; col++){
      cout<<" ";
    }

    for(col=1; col<=2*row-1; col++){
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}

b) similar to pattern 2: try yourself;
-------------------------------------------------------------------------------------------------------------------------
pattern 12:

Ternary:
result = (a > b) ? a : b;

Same as:
if (a > b) {
  result = a;
} else {
  result = b;
}
*/
// -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -SOL IS BELOW-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -int main()
// int main(){
//   int row, col;
//   int n;
//   cout << "enter value of n: ";
//   cin >> n;

//   for (row = 1; row <= 2 * n - 1; row++)
//   {

//     // Left stars
//     for (col = 1; col <= (row <= n ? n - row + 1 : row - n + 1); col++)
//     {
//       cout << "*";
//     }

//     // Spaces in between
//     for (col = 1; col <= (row <= n ? 2 * (row - 1) : 2 * (2 * n - 1 - row)); col++)
//     {
//       cout << " ";
//     }

//     // Right stars
//     for (col = 1; col <= (row <= n ? n - row + 1 : row - n + 1); col++)
//     {
//       cout << "*";
//     }

//     cout << endl;
//   }

//   return 0;
// }

/*
method 2 : using if-else


int main()
{
  int row, col;
  int n;
  cout << "Enter value of n: ";
  cin >> n;

  for (row = 1; row <= 2 * n - 1; row++) {
        int stars, spaces;

        if (row <= n) {
          // Top half
          stars = n - row + 1;
          spaces = 2 * (row - 1);
        } else {
          // Bottom half
          stars = row - n + 1;
          spaces = 2 * (2 * n - 1 - row);
        }

        // Left stars
        for (col = 1; col <= stars; col++) {
          cout << "*";
        }

        // Middle spaces
        for (col = 1; col <= spaces; col++) {
          cout << " ";
        }

        // Right stars
        for (col = 1; col <= stars; col++) {
          cout << "*";
        }

        cout << endl;
      }

      return 0;
    }

    method:   we can print top half and bottom half seperately
    NOTE: please remove left side seriel numbers before running
1  #include<iostream>
2  using namespace std;
3
4  int main()
5  {
6      int row, col;
7      int n;
8      cout << "enter value of n: ";
9      cin >> n;
10
11     // 🔼 Top half
12     for (row = 1; row <= n; row++) {
13         // Left stars
14         for (col = 1; col <= n - row + 1; col++) {
15             cout << "*";
16         }
17         // Spaces
18         for (col = 1; col <= 2 * (row - 1); col++) {
19             cout << " ";
20         }
21         // Right stars
22         for (col = 1; col <= n - row + 1; col++) {
23             cout << "*";
24         }
25         cout << endl;
26     }
27
28     // 🔽 Bottom half
29     for (row = 2; row <= n; row++) {
30         // Left stars
31         for (col = 1; col <= row; col++) {
32             cout << "*";
33         }
34         // Spaces
35         for (col = 1; col <= 2 * (n - row); col++) {
36             cout << " ";
37         }
38         // Right stars
39         for (col = 1; col <= row; col++) {
40             cout << "*";
41         }
42         cout << endl;
43     }
44
45     return 0;
46 }

*/

/*pattern 13
*/


int main() {
    int n;
    cout << "Enter number of rows for half diamond (e.g., 4): ";
    cin >> n;

    // Upper half
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars with spaces
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars with spaces
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

// method 1 : Method/function defined inside the class
// #include<iostream>
// using namespace std;
// class MyClass {        // The class
//   public:              // Access specifier
//     void myMethod() {  // Method/function defined inside the class
//       cout << "Hello World!";
//     }
// };

// int main() {
//   MyClass myObj;     // Create an object of MyClass
//   myObj.myMethod();  // Call the method
//   return 0;
// }

// // method 2 : Method/function defined outside the class

// class MyClass {        // The class
//   public:              // Access specifier
//     void myMethod();   // Method/function declaration
// };

// Method/function definition outside the class

#include<iostream>
using namespace std;
class MyClass {        // The class
  public:              // Access specifier
    void myMethod();   // Method/function declaration
};
void MyClass::myMethod() {
  cout << "Hello World!";
}

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}
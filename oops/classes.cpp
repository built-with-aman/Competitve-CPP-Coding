//Write a C++ program to create a class called Car that has data members for the car’s brand and year. 
//Create an object of the class, assign values to the data members, and display them.

#include<iostream>
using namespace std;

 class Car{
        public:
        string brand;
        int year;

    };

int main(){
    Car my_car;
    //assigning value
    my_car.brand="Suzuki";
    my_car.year=2002;

    // displaying values
    cout<<"my car brand "<< my_car.brand<<endl;
    cout<<"my car year "<< my_car.year<<endl;
    

     return 0;
}
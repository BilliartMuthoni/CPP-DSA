/*
Write a program that asks a user to input the radius then the program calculates the
volume of a sphere (the formula for the volume is (4/3) πr
3). 
Use the inbuilt
exponential function in C++ to compute (r3
).*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double radius;
    double volume;
    const double PI = 3.142;

    // Ask the user the size of the radius
    cout << "Enter the radius of the sphere: ";

    // Save the user's input into the variable radius
    cin >> radius;

    // Calculate the are 
    volume = (4.0/3.0) * PI * pow(radius, 3);

    // Display output
    cout << "Surface Area of Sphere = " << volume << endl;

    return 0;
}




/*
Using functions, write a program to compute the area and perimeter of a square.
The program should ask the user to enter a number corresponding to the side length
of the square and display the area and perimeter of the square
*/

#include <iostream>
using namespace std;

double calculatePerimeter(double);
double calculateArea(double);

int main(){
    double length;
    double area, perimeter; 

    // Ask for user's input on the length of the square and store input in variable length
    cout << "Enter the length of the square: ";
    cin >> length;

    // Call the calculatePerimeter and calculateArea functions and pass parameter value that user inputs
    perimeter = calculatePerimeter(length);
    area = calculateArea(length);
    
    // Display result
    cout << "The perimeter of the square is: " << perimeter << " and the area is: " << area << " of the square of length: " << length;

    return 0;

}

// calculate perimeter by multiplying the length by 4
double calculatePerimeter(double length){
    return length * 4;
}

// calculate area by multplying the length by itself
double calculateArea(double length){
    return length * length;
}
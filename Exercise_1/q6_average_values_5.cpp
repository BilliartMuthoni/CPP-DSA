/*
6. Write a C++ program that does the following:
i. Uses a loop for a user to continually input 5 values to populate an array.
ii. Calculates and displays the average of the values input into the array.
*/
#include <iostream>
using namespace std;

int main(){
    int values[5];
    int sum, average;

    // loop five times to enter five values
    for (int i=0; i<5; i++) {
        cout << "Enter the value number " << i+1 << " : ";
        cin >> values[i];
    }

    // calculate the sum
    for (int i = 0; i < 5; i++) {
        sum += values[i];
    }

    // calculate the average
    average = sum / 5.0;

    // output the result
    cout << "The average is: " << average;

    return 0;
}
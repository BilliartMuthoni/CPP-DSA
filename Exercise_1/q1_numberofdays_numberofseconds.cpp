/*. Write a program that asks the user for the number of days.
The program then prints out the number of seconds in the number of days given.*/

#include <iostream>
using namespace std;

int main(){
    int noOfDays;
    int seconds;

    // Ask the user for the number of days they would like to input
    cout << "Enter the number of days: ";

    //Save the user's input to the variable noOfDays
    cin >> noOfDays;

    //Calculation of seconds
    seconds = noOfDays * 24 * 60 * 60;

    //Output of the result
    cout << "Number of seconds in " << noOfDays << " day(s) is: " << seconds << endl;
    return 0;
}

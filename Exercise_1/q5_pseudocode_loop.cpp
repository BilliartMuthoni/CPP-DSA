/*
The following is pseudocode for a program being designed. Write the C++ program
equivalent of the same.
BEGIN
SET x TO 0, y TO 20
REPEAT
SUBTRACT 4 FROM y
ADD 2/y TO x
UNTIL
y IS LESS THAN 6
DISPLAY x
END
*/

#include <iostream>
using namespace std;

int main(){
    // start when y=20, each time y should be greater than 6 if not it stops, reduce y by 4 in each loop
    // repeat until --- do while
    double y=20;
    double x=0;
    do{
        y-=4;
        x+=2/y;  
    }while(y>=6);
    cout << "The value of x is: " <<x;

    return 0;
}


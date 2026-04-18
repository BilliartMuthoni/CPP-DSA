/*
Write a program using functions that determines whether a character input by a
user is uppercase or lower case.
*/
#include <iostream>
#include <cctype>
using namespace std;

string checkCase(char);

int main(){
    // char letter
    string input;
    cout << "Enter a letter or word in uppercase or lowercase: ";
    cin >> input;

    // Loops through each character in the word to check if it is in uppercase or lowercase
    for (int i = 0; i < input.length(); i++) {
        cout << input[i] << " : " << checkCase(input[i]) << endl;
    }

    return 0; 
}

/*
string uppercaseOrLowercase(char letter){
    // if in A-Z is uppercase if in a-z is in lowecase

    if (letter >= 'A' && letter <= 'Z'){
        return "Uppercase";
    }
    else  if (letter >= 'a' && letter <= 'z'){
        return "Lowercase";
    }
    else{
        return "Not a valid letter";
    }

}
*/

string checkCase(char input){
    // using the inbuilt c++ functions to check if the character is in uppercase or lowercase.

    if (isupper(input)){
        return "Uppercase";
    }
    else  if (islower(input)){
        return "Lowercase";
    }
    else{
        return "Not a valid input";
    }

}
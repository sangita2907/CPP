/*
    Find whether a char is upper, lower or numeric.
    'A' to 'Z' ---> Upper Case
    'a' to 'z' ---> Lower Case
    '0' - '9' ---> Numeric
*/

#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter a Character: ";
    cin >> ch;

    if(ch >= 'A' && ch <= 'Z'){
        cout << "Upper Case" << endl;
    } else if(ch >= 'a' && ch <= 'z'){
        cout << "Lower Case" << endl;
    } else if(ch >= '0' && ch <= '9'){
        cout << "Numeric" << endl;
    } else{
        cout << "Special Character" << endl;
    }
}
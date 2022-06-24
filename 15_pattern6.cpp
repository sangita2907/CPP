/*
    Create a pattern where limit will be taken from the user.
    If user enters 3 then -
        *
        **
        ***
    if user enters 6 then -
        *
        **
        ***
        ****
        *****
        ******
*/

#include<iostream>
using namespace std;

int main(){
    int limit;
    cout << "Enter limit: ";
    cin >> limit;

    int row = 1;
    while(row <= limit){
        int column = 1;
        while(column <= row){
            cout << "*";
            column++;
        }
        cout << endl;
        row++;
    }
}
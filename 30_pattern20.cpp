/*
    Create a pattern where limit will be taken from the user.
    If user enters 4 then -
        ****
        ***
        **
        *
*/
#include<iostream>
using namespace std;

int main(){
    int limit;
    cout << "Enter limit: ";
    cin >> limit;

    int i = 1;
    while(i <= limit){
        int star = limit - i + 1;
        while(star){
            cout << "*";
            star--;
        }
        cout << endl;
        i++;
    }
}
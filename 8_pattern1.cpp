/*
    Create a pattern where limit will be taken from the user.
    If user enters 3 then -
        ***
        ***
        ***
    if user enters 4 then -
        ****
        ****
        ****
        ****
*/
#include<iostream>
using namespace std;

int main(){
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;

    int i = 1;
    while(i <= limit){
        int j = 1;
        while(j <= limit){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}


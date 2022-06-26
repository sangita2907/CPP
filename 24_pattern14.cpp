/*
    Create a pattern where limit will be taken from the user.
    If user enters 3 then -
        ABC
        BCD
        CDE
*/
#include<iostream>
using namespace std;

int main(){
    int limit;
    cout << "Enter limit: ";
    cin >> limit;

    int i = 1;
    while(i <= limit){
        int j = 1;
        while(j <= limit){
            char ch = 'A' + i + j - 2;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }
}
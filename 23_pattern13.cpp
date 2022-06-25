/*
    Create a pattern where limit will be taken from the user.
    If user enters 3 then -
        ABC
        DEF
        GHI
*/
#include<iostream>
using namespace std;

int main(){
    int limit;
    cout << "Enter limit: ";
    cin >> limit;

    int i = 1;
    char ch = 'A';
    while(i <= limit){
        int j = 1;
        while(j <= limit){
            cout << ch;
            ch = ch + 1;
            j++;
        }
        cout << endl;
        i++;
    }
}
/*
    Create a pattern where limit will be taken from the user.
    If user enters 3 then -
        ABC
        ABC
        ABC
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
            cout << (char)('A' + j - 1);
            j++;
        }
        cout << endl;
        i++;
    }
}
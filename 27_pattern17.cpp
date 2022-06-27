/*
    Create a pattern where limit will be taken from the user.
    If user enters 4 then -
        A
        BC
        CDE
        DEFG
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
        while(j <= i){
            cout << (char)('A' + i + j - 2);
            j++;
        }
        cout << endl;
        i++;
    }
}
/*
    Create a pattern where limit will be taken from the user.
    If user enters 3 then -
        A
        BB
        CCC
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
            cout << (char)('A' + i - 1);
            j++;
        }
        cout << endl;
        i++;
    }
}
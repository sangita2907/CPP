/*
    Create a pattern where limit will be taken from the user.
    If user enters 4 then -
        D
        CD
        BCD
        ABCD
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
        char start = 'A' + limit - i;
        while(j <= i){
            cout << start;
            start++;
            j++;
        }
        cout << endl;
        i++;
    }
}
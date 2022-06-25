/*
    Create a pattern where limit will be taken from the user.
    If user enters 4 then -
        AAAA
        BBBB
        CCCC
        DDDD
    
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
            cout << (char)('A' + i - 1);
            j++;
        }
        cout << endl;
        i++;
    }
}
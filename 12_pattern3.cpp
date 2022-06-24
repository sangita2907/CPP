/*
    Create a pattern where limit will be taken from the user.
    If user enters 3 then -
        123
        123
        123
    if user enters 4 then -
        1234
        1234
        1234
        1234
*/
#include<iostream>
using namespace std;

int main(){
    int limit;
    cout << "Enter a limit: ";
    cin >> limit;

    int i = 1;
    while(i <= limit){
        int j = 1;
        while(j <= limit){
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
}

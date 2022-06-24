/*
    Create a pattern where limit will be taken from the user.
    If user enters 3 then -
        111
        222
        333
    if user enters 4 then -
        1111
        2222
        3333
        4444
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
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}
/*
    Create a pattern where limit will be taken from the user.
    If user enters 3 then -
        321
        321
        321
    if user enters 4 then -
        4321
        4321
        4321
        4321
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
            cout << limit - j + 1;
            j++;
        }
        cout << endl;
        i++;
    }
}
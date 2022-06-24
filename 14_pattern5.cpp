/*
    Create a pattern where limit will be taken from the user.
    If user enters 3 then -
        1 2 3
        4 5 6
        7 8 9
    if user enters 4 then -
        1 2 3 4
        5 6 7 8
        9 10 11 12
        13 14 15 16
*/

#include<iostream>
using namespace std;

int main(){
    int limit;
    cout << "Enter a limit: ";
    cin >> limit;

    int i = 1;
    int count = 0;
    while(i <= limit){
        int j = 1;
        while(j <= limit){
            count++;
            cout << count << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}
/*
    Print 1 to n using for loop.
    where n is the input taken from the user.
*/

#include<iostream>
using namespace std;

int main(){
    int limit;
    cout << "Enter Limit: ";
    cin >> limit;

    for(int i = 1; i <= limit; i++){
        cout << i << endl;
    }
}
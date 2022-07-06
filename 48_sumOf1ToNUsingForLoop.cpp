/*
    Print the sum of 1 to N.
    where N is the input taken from the user.

    if N=5 then
    1+2+3+4+5 = 15

*/
#include<iostream>
using namespace std;

int main(){
    int limit;
    cout << "Enter limit: ";
    cin >> limit;

    int sum = 0;
    for(int i = 1; i <= limit; i++){
        sum += i;
    }
    cout << sum << endl;
}
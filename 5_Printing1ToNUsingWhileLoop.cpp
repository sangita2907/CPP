/*
    Print 1 to N using while loop where N is the input value.
    o/p ->
    Enter a number: 5
    1 2 3 4 5 
*/
#include<iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int i = 1;
    while(i <= number){
        cout << i << " ";
        i = i + 1;
    }
}
/*
    Print the sum of 1 to N numbers where N is the input value.
    o/p ->
    Enter a number:5
    15
*/
#include<iostream>
using namespace std;

int main(){

    int number;
    cout << "Enter a number:";
    cin >> number;

    int i = 1;
    int sum = 0;

    while(i <= number){
        sum = sum + i;
        i = i + 1;
    }
    cout << sum;
}


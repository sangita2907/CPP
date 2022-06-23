/*
    Check a number is prime or not.
    o/p ->
    Enter a number: 6
    Not Prime For 2
    Not Prime For 3
    Prime For 4
    Prime For 5
*/

#include<iostream>
using namespace std;

int main(){

    int number;
    cout << "Enter a number: ";
    cin >> number;

    int i = 2;
    while(i < number){

        if(number % i == 0){
            cout << "Not Prime For " << i << endl;
        } else{
            cout << "Prime For " << i << endl;
        }
        i = i + 1;
    }
}
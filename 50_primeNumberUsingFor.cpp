/*
    Check whether a number is prime or not.
    5 - prime
    10 - not prime
*/
#include<iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter Number: ";
    cin >> number;

    bool isPrime = 1;
    for(int i = 2; i < number; i++){
        if(number % i == 0){
            isPrime = 0;
            break;
        }
    }

    if(isPrime == 0){
        cout << "Not a prime number..."; 
    } else{
        cout << "Prime Number";
    }


}
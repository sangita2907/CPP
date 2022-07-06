/*
    Print the fibonacci series upto N.
    like - 
    0 1 1 2 3 5 8 13 21 .................
*/
#include<iostream>
using namespace std;

int main(){

    int limit;
    cout << "Enter limit: ";
    cin >> limit;

    int firstNumber = -1;
    int secondNumber = 1;
    for(int i = 1; i <= limit; i++){

        int nextNumber = firstNumber + secondNumber;

        cout << nextNumber << " ";

        firstNumber = secondNumber;
        secondNumber = nextNumber;
    }

}
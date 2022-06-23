/*
    Check whether a number is positive, negative or zero.
    o/p ->
    Case-1:Enter a number: 45
           Positive
    Case-2:Enter a number: 0
           zero
    Case-3:Enter a number: -90
           Negative

*/
#include<iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter a number: ";
    cin>>number;

    if(number > 0){
        cout << "Positive" << endl;
    } else if(number < 0){
        cout << "Negative" << endl;
    } else{
        cout << "zero" << endl;
    }
}
/*
    Check whether a number is positive or not.
    5 -> positive
    -9 -> negetive
*/

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter a number:";
    cin>>number;

    if(number > 0){
        cout<<"Number is positive.."<<endl;
    } else{
        cout<<"Number is negetive.."<<endl;
    }
}
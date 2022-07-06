/*
    Continue - used to skip iteration.
*/
#include<iostream>
using namespace std;

int main(){
    for(int i = 0; i < 5; i++){
        cout << "Hi" << endl;
        cout << "Hey" << endl;
        continue;

        //Unreachable code
        cout << "Please Do Reply.." << endl;

    }
}
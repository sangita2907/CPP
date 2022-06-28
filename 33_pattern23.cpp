/*
    Create a pattern where limit will be taken from the user.
    If user enters 4 then -
           1
          22
         333
        4444
*/

#include<iostream>
using namespace std;

int main(){
    int limit;
    cout << "Enter limit: ";
    cin >> limit;

    int i = 1;
    while(i <= limit){
        //print space
        int space = limit - i;
        while(space){
            cout << " ";
            space--;
        }
        //print number;
        int number = i;
        while(number){
            cout << i;
            number--;
        }
        cout << endl;
        i++;

    }
}
/*
    Create a pattern where limit will be taken from the user.
    If user enters 4 then -
           *
          **
         ***
        ****
*/
#include<iostream>
using namespace std;

int main(){
    int limit;
    cout << "Enter limit: ";
    cin >> limit;

    int i = 1;
    while(i <= limit){
        //space
        int space = limit - i;
        while(space){
            cout << " ";
            space--;
        }
        //print *
        int j = 1;
        while(j <= i){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}
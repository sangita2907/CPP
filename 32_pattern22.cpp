/*
    Create a pattern where limit will be taken from the user.
    If user enters 4 then -
        1111
         222
          33
           4
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
        int space = i - 1;
        while(space){
            cout << " ";
            space--;
        }
        //print numbers
        int number = limit - i + 1;
        while(number){
            cout << i;
            number--;
        }
        cout << endl;
        i++;
    }
}
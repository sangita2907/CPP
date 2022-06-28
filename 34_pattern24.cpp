/*
    Create a pattern where limit will be taken from the user.
    If user enters 4 then -
        1234
         234
          34
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
        int star = i - 1;
        while(star){
            cout << " ";
            star--;
        }
        int number = limit - i + 1;
        int count = i;
        while(number){
            cout << count;
            count++;
            number--;
        }
        cout << endl;
        i++;
    }
}

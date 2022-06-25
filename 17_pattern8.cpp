/*
    Create a pattern where limit will be taken from the user.
    If user enters 4 then -
        1 
        2 3 
        4 5 6 
        7 8 9 10 
*/
#include<iostream>
using namespace std;

int main(){
    int limit;
    cout << "Enter Limit: ";
    cin >> limit;

    int i = 1;
    int count = 1;
    while(i <= limit){
        int j = 1;
        while(j <= i){
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}
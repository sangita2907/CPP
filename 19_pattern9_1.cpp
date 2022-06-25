/*
    Create a pattern where limit will be taken from the user.
    If user enters 4 then -
        1 
        2 3 
        3 4 5 
        4 5 6 7 
    
*/
#include<iostream>
using namespace std;

int main(){
    int limit;
    cout << "Enter limit: ";
    cin >> limit;

    int i = 1;
    while(i <= limit){
        int j = 1;
        while(j <= i){
            cout << i + j - 1 << " ";
            j++;
        }
        cout << endl;
        i++;

    }
}
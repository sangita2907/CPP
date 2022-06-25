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
        int value = i;
        while(j <= i){
            cout << value << " ";
            value++;
            j++;
        }
        cout << endl;
        i++;
    }
}
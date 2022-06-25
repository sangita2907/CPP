/*
    Create a pattern where limit will be taken from the user.
    If user enters 3 then -
        1
        22
        333
    if user enters 6 then -
        1
        22
        333
        4444
        55555
        666666
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
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }

}

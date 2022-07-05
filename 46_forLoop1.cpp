/*
    Print 1 to n using for loop.
    where n is the input taken from the user.
*/
#include<iostream>
using namespace std;

int main(){
    int limit;
    cout << "Enter Limit: ";
    cin >> limit;

    int i = 1;
    for( ; ; ){
        if(i <= limit){
            cout << i << endl;
        } else{
            break;
        }
        i++;
    }
}
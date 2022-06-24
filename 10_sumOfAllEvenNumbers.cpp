/*
    Print the sum of all even numbers upto a limit.
    if user enter 10 then - 
    2 + 4 + 6 + 8 + 10 = 30
*/

#include<iostream>
using namespace std;

int main(){
    int limit;
    cout << "Enter a limit: ";
    cin >> limit;

    int i = 1;
    int sum = 0;
    while( i <= limit){
        if(i % 2 == 0){
            sum = sum + i;
        }
        i++;
    }
    cout << sum;
}

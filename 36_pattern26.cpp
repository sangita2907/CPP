/*
    Create a pattern where limit will be taken from the user.
    If user enters 5 then -
        1234554321
        1234**4321
        123****321
        12******21
        1********1
*/
#include<iostream>
using namespace std;

int main(){
    int limit;
    cout << "Enter limit: ";
    cin >> limit;

    int i = 1;
    while(i <= limit){
        //1st triangle
        int start = limit - i + 1;
        int j = 1;
        while(j <= start){
            cout << j;
            j++;
        }

        //2nd triangle
        int star = 2 * (i - 1);
        while(star){
            cout << "*";
            star--;
        }

        //3rd triangle
        while(start){
            cout << start;
            start--;
        }
        cout << endl;
        i++;
    }
}


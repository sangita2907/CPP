/*
    Create a pattern where limit will be taken from the user.
    If user enters 4 then -
           1
          23
         456
        78910
*/
#include<iostream>
using namespace std;

int main(){
    int limit;
    cout << "Enter limit: ";
    cin >> limit;

    int i = 1;
    int count = 1;
    while(i <= limit){
        //print star
        int space = limit - i;
        while(space){
            cout << " ";
            space--;
        }
        //print numbers
        int j = 1;
        while(j <= i){
            cout << count;
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}

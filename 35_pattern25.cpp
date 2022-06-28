/*
    Create a pattern where limit will be taken from the user.
    If user enters 4 then -
           1
          121
         12321
        1234321
*/
#include<iostream>
using namespace std;

int main(){
    int limit;
    cout << "Enter limit: ";
    cin >> limit;

    int i = 1;
    while(i <= limit){
        //space
        int space = limit - i;
        while(space){
            cout << " ";
            space--;
        }

        //2nd triangle
        int j = 1;
        while(j <= i){
            cout << j;
            j++;
        }

        //3rd triangle
        int start = i - 1;
        while(start){
            cout << start;
            start--;
        }
        cout << endl;
        i++;
    }
}

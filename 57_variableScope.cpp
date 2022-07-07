#include<iostream>
using namespace std;

int main(){
    int a = 5;
    if(true){
        int a = 10;
        cout << a << endl;
    }
    cout << a << endl;
    //int a = 15; //ERROR
    int i = 2;
    for(int i = 1; i < 4; i++){
        cout << "Hi" << endl;
    }
    
    for(; i < 4 ; i++){
        cout << "Hey" << endl;
    }
}
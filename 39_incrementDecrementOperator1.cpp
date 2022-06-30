/*
    Post Increment(i++) -> First use then increment by 1.
    Pre Increment(++i) -> First increment by 1 then use.

    Post Decrement(i--) -> First use then decrement by 1.
    Pre Decrement(--i) -> First decrement by 1 then use.
*/
#include<iostream>
using namespace std;

int main(){
    int i = 7;

    cout << (++i) << endl;
    //print 8, i = 8
    cout << (i++) << endl;
    //print 8, i = 9

    cout << (i--) << endl;
    //print 9, i = 8
    cout << (--i) << endl; 
    //print 7, i = 7
}
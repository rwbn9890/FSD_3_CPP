#include<iostream>
#include<stdio.h>

using namespace std;


int main(){
    

    int a = 10; // 4 bytes
    int b = 10;
    int c = 10;

    // decimal // 0 -9
    // hexa decimal 0-9, a- f
    // octan
    // binary


    cout << &a;

    printf("%x", &a);
    cout << endl;
    printf("%ju", &a);
    cout << endl;
    printf("%u", &a);
    cout << endl;
    printf("%u", &b);
    cout << endl;
    printf("%u", &c);
    cout << endl;
    // printf("%o", &a);
    // cout << endl;
    // printf("%o", &b);
    // cout << endl;
    // printf("%o", &c);

    // int b = a;  // 4 bytes

    // int c = a // 4 bytes


        return 0;
}
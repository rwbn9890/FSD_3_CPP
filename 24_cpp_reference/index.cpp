#include<iostream>

using namespace std;


 int main(){

    int a = 50;
    int b = a;

    a = 100; // shallow copy

    cout << a <<endl;
    cout << b << endl;
 

    int x = 50;
    int &z = x; // deep copy


   cout << sizeof(z) << endl;
   
   
   // z = 2000;
   cout << sizeof(z) << endl;

    // cout << x << endl;
    // cout << z << endl;

    return 0;
 }
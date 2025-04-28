#include<iostream>
#include<string.h>
using namespace std;



int main(){


int *a = new int(10);

cout << "address: "<<   a  << " ,value: " << *a << endl;

delete(a);
   
cout << "address: "<<   a  << " ,value: " << *a << endl; // dangling element

a = NULL;

cout << "address: "<<   a  << " ,value: " << *a << endl; // segement error

    return 0;

    
}

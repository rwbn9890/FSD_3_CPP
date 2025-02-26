#include<iostream>

using namespace std;

int main(){

    // int choice = 3;
  char choice = 'b';


    switch (choice){
        case 'a' : cout << "1 is presses" << endl;
                break;
        case 'b' : cout << "2 is presses" << endl;
                 break;
        case 'c' : cout << "3 is presses" << endl;
                break;
        case 'd' : cout << "4 is presses" << endl;
                break;
        default:cout << "invalid no" << endl;
    }

    return 0;
}
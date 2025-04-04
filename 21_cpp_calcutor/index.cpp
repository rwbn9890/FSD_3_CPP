#include<iostream>

using namespace std;



void sum(){
    int first, second;
    cout << "First num: ";
    cin >> first;
    cout << "Second Num: ";
    cin >> second;
    cout << "Addtion of " << first << " and " << second << " is " << first+second << endl;
}

void sub(){
    int first, second;
    cout << "First num: ";
    cin >> first;
    cout << "Second Num: ";
    cin >> second;
    cout << "substraction of " << first << " and " << second << " is " << first-second << endl;
}

int main(){

  int choice, first, second;;
  
  while (choice!=0)
  {
    cout << "MENU:-" << endl;
    cout << "press 1 for +" << endl;
    cout << "press 2 for -" << endl;
    cout << "press 3 for *" << endl;
    cout << "press 4 for /" << endl;
    cout << "press 5 for %" << endl;
    cout << "press 0 for Exit" << endl << endl;

    cout << "Enter Choice: ";
    cin >> choice;

    
    switch (choice)
    {
    case 1:
        sum();
        break;

    case 2:
        sub();
    break;
        break;

    case 3:
        
        break;

    case 4:
        
        break;
    
    default:
        break;
    }

    cout << "....................................." << endl << endl;

  }
  


}
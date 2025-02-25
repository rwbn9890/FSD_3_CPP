#include<iostream>

using namespace std;

int main()
{


    cout << "Press 1 for PIZZA" << endl;
    cout << "Press 2 for BURGER" << endl;
    cout << "Press 3 for SANDWITCH" << endl;
    cout << "Press 4 for PASTA" << endl;
    cout << "---------------------------" << endl;


    int type;
    int choice;
cout << "---------------------------" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    cout << "---------------------------" << endl;

    if(choice == 1)
    {
        cout << "Press 1 for Onion PIZZA" << endl;
        cout << "Press 2 for mexicon PIZZA" << endl;
        cout << "Press 3 for margaritta PIZZA" << endl;
        cout << "Press 4 for volcano PIZZA" << endl;
        cout << "---------------------------" << endl;
        cout << "Enter Type: ";
        cin >> type;

        if(type==1)
        {
            cout << "you oreder Onion pizza" << endl;
        }
        else if(type==2)
        {
            cout << "your oredred mexican Pizza" << endl;
        }
        else if(type ==3)
        {
            cout << "you ordered margaritta pizza" << endl;
        }
        else if(type == 4)
        {
            cout << "your oredred volcano pizza" << endl;
        }
        else{
            cout << "thise pizza type is not available ...!" << endl;
        }
        cout << "---------------------------" << endl;

    }
    else if(choice ==2)
    {
        cout << "you ordered BURGER" << endl;
    }
    else if(choice == 3)
    {
        cout << "you ordered SANDWITCH" << endl;
    }
    else if(choice == 4 ){
        cout << "you ordred PASTA" << endl;
    }
    else{
        cout << "please select the valid choice...! " << endl;
    }

    cout << "---------------------------" << endl;

    return 0;
}
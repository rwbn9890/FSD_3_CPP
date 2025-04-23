#include<iostream>
#include<string.h>
using namespace std;


class Animal {
    public:

    void eat(char food[]){
        cout << "can Eat " << food << endl;
    }

    void hunt(){
        cout << "can hunt ..!" << endl;
    }

};


class vegie : public Animal{

    public:

    char food[100] = "grass";

};

class non : public Animal{

    public:
    char food[100] = "meat";

};


int main(){


    non cow, tiger;

    char food[100] = "grass";
    char food[100] = "grass";

    cow.eat(food);
    cow.hunt();

    
    return 0;
}
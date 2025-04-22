#include<iostream>
#include<string.h>
using namespace std;


class Animal{ // base class, superclass, parent class
    public:
        int eat = 2;
        int sleep = 7;
};



class dog : public Animal{ // child class , derived class
        public:
        int eat = 20;
            void method(){
                cout << "dog is eating : " << Animal::eat << " grma food" << endl;
            }
    
};


class BullDog : public dog{

};





int main(){

  
    dog dog1;

   dog1.method();

    
    return 0;
}
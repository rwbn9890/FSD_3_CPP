#include<iostream>
#include<string.h>
using namespace std;

class Animal{

    public:
    char name[100];
    char breed[100];
    int age;
    char type[100];


    Animal(){
        strcpy(this->name, "-");
        strcpy(this->breed, "-");
        this->age = 0;
        strcpy(this->type, "Dog");
        cout << "welcome Dog..!" << endl;
    }


    Animal(char n[]){
        strcpy(this->type, n);
    }



};

int main(){

   Animal dog1, cheetah("tiger"), whale("fish"), tuphy;
   
   int a = 20;

    // cout << dog1.name << endl;
    // cout << dog1.breed << endl;
    // cout << dog1.age << endl;
    // cout << dog1.type << endl;



    cout << dog1.type << endl;
    cout << cheetah.type << endl;
    cout << whale.type << endl;
    cout << tuphy.type << endl;

   

    
    
    return 0;
}
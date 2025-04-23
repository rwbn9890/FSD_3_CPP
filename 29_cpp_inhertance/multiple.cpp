#include<iostream>
#include<string.h>
using namespace std;


class Engine{

    public:

        char eng1[100] = "V8";
        char eng2[100] = "V12";
        char eng3[100] = "Turbo";

   
};


class Wheels{

    public:
        char wheel1[100] = "Alloy wheel";
        char wheel2[100] = "Aluminum wheel";
        char wheel3[100] = "string wheel";
};



class Vehical : public Engine, public Wheels {

    public:
    void spf(){
        cout << "Vehical has " << this->eng1 << " with " << this->wheel1 << " ...!";
    }

};



int main(){

Vehical veh1;

veh1.spf();



    
    return 0;
}
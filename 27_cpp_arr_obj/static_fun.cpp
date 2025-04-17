#include<iostream>
#include<string.h>
using namespace std;

class Cars{

    public:
    char name[100];
    char model[100];
   static char type1[100];
   static char type2[100];


   static getModel(){
        cout<< type << endl;
    }




};


char Cars::type1[100] = "SUV";
char Cars::type2[100] = "Sedan";

int main(){

    Cars car1, car2, car3;

   strcpy( car1.name, "Mahindra");
   strcpy( car1.model, "XUV 700");


   strcpy( car2.name, "Tata");
   strcpy( car2.model, "Safari");

   strcpy( car3.name, "Honda");
   strcpy( car3.model, "City");


   Cars::getModel();


//    cout << car1.name << " " << car1.model << " " << Cars::type1 << endl;
//    cout << car2.name << " " << car2.model << " " << Cars::type1 << endl;
//    cout << car3.name << " " << car3.model << " " << Cars::type2 << endl;


    
    
    return 0;
}
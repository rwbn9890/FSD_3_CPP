#include<iostream>
using namespace std;
#include<string.h>

class Travel
{
   

 public:
    void truck(){
        cout << "Trunk is Traveling..." << endl;
    }

    void truck(int num){
        cout << "Trunk is Traveling, with " << num << " passengers." << endl;
    }

    void truck(int n1, int n2){
        cout << "Trunk is Traveling, with " << n1 << " passengers, and " << n2 << " goodies." << endl;
    }

};



int main(){

    Travel tr;

    tr.truck(10, 20);



    return 0;
}
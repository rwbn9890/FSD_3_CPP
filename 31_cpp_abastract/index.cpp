#include<iostream>
#include<string.h>
using namespace std;



class Research {

    public:

        virtual void hydrogenEngine() = 0;
        virtual void atomEngine() = 0;
        virtual int electricEngine() = 0;

      
};


class subResearch : public Research {

    public:
    void hydrogenEngine(){
        cout << "hydrogen egnine " << endl;
        }

    void atomEngine(){
        cout << "atomEngine egnine " << endl;
        }
        
    int electricEngine(){
        cout << "atomEngine egnine " << endl;
        return 760;
        }

};

int main(){

    subResearch DE, HE;

    DE.dieselEngine();
    HE.hydrogenEngine();

    return 0;
}

#include<iostream>
using namespace std;
#include<string.h>

class in
{
 
    public:

        void wearing(){
            cout << "kurta-pant" << endl;
        }

};

class mh : public in {
    public:

        void wearing(){
            cout << "kurta-dhoti" << endl;
        }
};

class gj : public in {


    public:
        void wearing(){
            cout << "kurta-kediyu" << endl;
        }
};

class dl : public gj, public mh{

    public:
    void wearing(){
        cout << "kurta-pathani" << endl;
        gj::wearing();
        mh::wearing();

    }
};



int main(){

   
dl aman;
mh *obj;


obj = &aman;



// aman.wearing();


obj->wearing();


  



    return 0;
}
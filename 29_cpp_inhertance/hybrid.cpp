#include<iostream>
#include<string.h>
using namespace std;


class A {
    public:

    void atop(){
        cout << "This is Top A" << endl;
    }
};

class B : public A{
    public:
    void bside(){
        cout << "This is side B" << endl;
    }
};

class C : public A{
    public:
    void cside(){
        cout << "This is side C" << endl;
    }
};

class D : public B, public C{
    public:
    void dbottom(){
        cout << "This is bottom D" << endl;
    }
};


int main(){


    D d1;


    d1.dbottom();
    d1.cside();
    d1.bside();

    d1.B::atop();


    std[0].grid
    
    return 0;
}
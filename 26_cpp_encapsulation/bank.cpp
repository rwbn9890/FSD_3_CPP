#include<iostream>
#include<string.h>

using namespace std;


class Bank{

    private:
        int balance = 19821;
        int pin = 7050;

    public:
        void setBal(int deposit){
            this->balance = this->balance + deposit;
        }


        void getBal(int pin){
            if(this->pin == pin)
            {
                cout<< "bal is: " << this->balance << " /-" << endl;
            }
            else
            {
                cout << "Enter valid password" << endl;
            }
        }
};



 int main(){


Bank user1;





int deposit = 1000;


int pin;
cout << "Pin: ";
cin >> pin;

user1.setBal(deposit);

user1.getBal(pin);





    return 0;
}
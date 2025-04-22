#include<iostream>
#include<string.h>
using namespace std;


class Student{
    public:

    int grid;
    int marks;


    Student(int grid, int marks){
        this->grid = grid;
        this->marks = marks;
    }


    Student(const Student &std1){
            this->grid = std1.grid;
            this->marks = std1.marks;
    }




    ~Student(){
        cout <<"Program destructed...!" << endl;
    }

};


class Product{


    public:
        int id;

        Product(){
            cout<< "product created" << endl;
        }

        Product(int id){
            this->id = id;
            cout << "product id: " << this->id << endl;
        }

        Product(const Product &obj){
           this->id = obj.id;
        }




};

int main(){


    Student std1(8674, 80);


    Student std2(std1);

    cout << std1.grid << endl;
    cout << std1.marks << endl;
    cout << std2.grid << endl;
    cout << std2.marks << endl;












    // Product prod1, prod2(10);

    // // cout << prod2.id << endl;

    // Product prod3(prod2);

    // cout << prod3.id << endl;


    return 0;
}
#include<iostream>

using namespace std;


int main(){

    int marks;
    cout << "Enter Marks: ";
    cin >> marks;

    char grade;

    if(marks > 90)
    {
        cout << "your Grad is A" << endl;
        grade = 'A';
    }
    else if(marks > 80){
        cout << "your Grad is B" << endl;
        grade = 'B';
    }
    else if(marks > 70){
        cout << "your Grad is C" << endl;
        grade = 'C';
    }
    else if(marks > 60){
        cout << "your Grad is D" << endl;
        grade = 'D';
    }
    else if(marks > 50){
        cout << "your Grad is E" << endl;
        grade = 'E';
    }




    switch (grade)
    {
    case 'A':
            cout << "Exelent work...!" << endl;
        break;
    
    case 'B':
            cout << "Good work...!" << endl;
        break;
    
    case 'C':
            cout << "Need to improve work...!" << endl;
        break;
    
    case 'D':
            cout << "work hard work...!" << endl;
        break;
    
    default: cout <<"failed try again next time...!";
    }

    return 0;
}
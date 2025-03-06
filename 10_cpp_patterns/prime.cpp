#include<iostream>

using namespace std;

int main(){

    

    // the num which is not divisible by other than 1 or the number it self;

    int num = 5;
    
    int count=0;

    for(int i=2; i<num; i++)
    {
        if(num%i==0){
            count++;
        }
    }

    if(count==0)
    {
        cout << num << " is prime Number...!" << endl;
    }
    else{
        cout << num << " is not prime number ...!" << endl;
    }


    return 0;
}

   
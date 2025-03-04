#include<iostream>

using namespace std;

int main(){

//    int i = 1; 

//    while(i<10)
//    {
//     cout << i << endl;
//     i++;
//    }



   for(int j=1; j<=10; j++) // 1 // 2 // 3
   {
        if(j%2==0)
        {
            cout << "*" << " ";
        }
        else{
            cout << "#" << " ";
        }
   }

    return 0;
}

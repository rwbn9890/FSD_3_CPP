#include<iostream>

using namespace std;

int main(){


        // for(int i=1; i<=5; i++)
        // {
        //     for(int j=1; j<=5; j++)
        //     {
        //         if(j%2 == 0){
        //             cout << "#" << " ";
        //         }
        //         else{
        //             cout << "*" << " ";
        //         }
        //     }
        //     cout << endl;
        // }












    for(int i=1; i<=5; i++)
        {
            for(int j=1; j<=5; j++)
            {
                if(i%2==0)
                {
                   cout << "*" << " ";  
                }
                else{

                    cout << "#" << " ";  
                }
               
            }
            cout << endl;
        }


    return 0;
}

// * # * # * #

// * * * * *
// # #  3 #
#include<iostream>
using namespace std;

int main(){



    int arr1[3][3] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
            };


    int arr2[3][3] = {
            {5, 9, 3},
            {7, 5, 6},
            {0, 8, 1}
            };

    int arr3[3][3];

            // cout << sizeof(arr)/sizeof(arr[0][0]);


        for(int i=0; i<3; i++) // 0
        {
            for(int j=0; j<3; j++) 
            {
                arr3[i][j] = arr1[i][j] + arr2[i][j];
            }
        }

        for(int i=0; i<3; i++) // 0
        {
            for(int j=0; j<3; j++) 
            {
               cout << arr3[i][j] << " ";
            }
            cout << endl;
        }




    return 0;
}
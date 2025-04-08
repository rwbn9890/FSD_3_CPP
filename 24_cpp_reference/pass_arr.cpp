#include<iostream>

using namespace std;

void addition(int a[], int z){
    int sum = 0;
    for(int i=0; i<4; i++){
        sum = sum + a[i];
    }
}


void change(const int z){
    int z = 20;

    cout << z << endl;
}

 int main(){

    int arr[4] = {9, 8, 7, 6};

    int z = 100;

    change(z);

    addition(arr, z);


    return 0;
 }
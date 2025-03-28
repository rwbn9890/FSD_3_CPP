#include<iostream>

using namespace std;

int isPrime(int num){    
    int count = 0;
        for(int i=2; i<num; i++)// 2, 3
        {
            if(num%i == 0) // 9%3 == 0
            {
                count++;
            }
        }
        if(count<1)
        {
           return num;
        }
      
}


int main(){

int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //0, 1, 2

for(int i=0; i<10; i++)
{
   cout << isPrime(arr[i]) << " ";
}

    
    return 0;
}

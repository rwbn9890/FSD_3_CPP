#include<iostream>

using namespace std;

int rec(int n){
   if(n<=1){
    return 1;
   }
   return n*rec(n-1);
}


int main(){
        cout << rec(4);

        // 4 * rec(3)
        // 4 * 3 * rec(2)
        // 4 * 3 * 2 * rec(1)
        // 4 * 3 * 2 * 1  
}
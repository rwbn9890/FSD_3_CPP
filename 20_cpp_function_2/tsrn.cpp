#include<iostream>

using namespace std;


// TAKE SOMETHING RETURN NOTHING

void sum(int n){ // void sum(int n)
    int sum = 0;
    for(int i=1; i<=n; i++) // 1, 2, 3
    {
        sum = sum + i; // sum = 0 + 1 = 1; sum = 1 + 2 = 3;   sum = 3 + 3
    }
    cout << sum;
}





int main(){

int num = 5;  // 4

    sum(num); // sum(5)

    // sub(num);


    return 0;
}

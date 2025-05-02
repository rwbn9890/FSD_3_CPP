#include<iostream>
#include<vector>
using namespace std;




 int main(){

    vector <int> arr = {4, 6, 2, 3, 1, 0, 4, 2, 7, 10, 6, 8, 1}; // i = 1, 2
    vector <int> sm;

    for(int i=1; i<arr.size()-1; i++)
    {
        if(arr[i] < arr[i-1] &&  arr[i] < arr[i+1])
        {
            sm.push_back(arr[i]);
        }
    }

    for(int ele : sm)
    {
        cout << ele << " ";
    }

 

    return 0;
 }
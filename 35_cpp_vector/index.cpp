#include<iostream>
#include<vector>
using namespace std;


// template <typename T>

// class vector1{

    
//     public:
//     T size;
//     T arr[5];

//     vector(T size){
//         this->size = size;
//         arr[this->size];
//     }

//    void push_back(ele){
//         arr[0] = ele;
//     }
// };



 int main(){

    // vector1<int>x(5);
    // x.push_back(10);


    vector <int> arr(5, 10);

    arr.push_back(99);
    arr.push_back(100);

 

    return 0;
 }
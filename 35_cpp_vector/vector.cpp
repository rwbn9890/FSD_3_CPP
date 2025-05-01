#include<iostream>
#include<vector>
using namespace std;


 int main(){

    vector <int> arr(1, 10);
    vector <int > arr2 {1, 2, 3, 4, 5};
    vector<int> rev;

    arr.push_back(99);
    arr.push_back(100);
    arr.push_back(200);
    arr.push_back(230);


    arr.pop_back();



    arr.erase(arr.begin()+1);


    arr.insert(arr.begin()+1, 19);

    arr.insert(arr.end()-1, 13);

    // for(int ele : arr)
    // {
    //     cout << ele << endl;
    // }


    for(int i=arr.size()-1; i>=0; i--)
    {
        rev.push_back(arr[i]);
    }
 

//    cout<< arr.size();

    // cout<< arr.at(7);
    
    // cout<< arr2.empty();


    
   for(int r : rev)
   {
    cout << r << endl;
   }







    return 0;
 }
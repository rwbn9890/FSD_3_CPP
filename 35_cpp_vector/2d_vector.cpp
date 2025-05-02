#include<iostream>
#include<vector>
using namespace std;


 int main(){


    int size;

    cout << "size: ";
    cin >> size;


vector <int> v1;

vector <vector<int>> v2(size, v1);


for(vector <int> ele : v2)
{
  for(int i=0; i<size; i++){
    cout << "ele["<< i <<"]:";
    int a;
    cin >> a;
    v1.push_back(a);
  }
    cout << endl;
}

for(vector <int> ele : v2)
{
    for(int e : v1)
    {
        cout << e << " ";
    }
    cout << endl;
}




    return 0;
 }
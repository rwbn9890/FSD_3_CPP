#include<iostream>
using namespace std;

int main(){



    int *arr;

  arr = new int[5];

   if(arr==NULL)
   {
    cout << "memory allocation is failed...!" << endl;
   }
   else{
    cout << "Memory Allocation is successfully...!" << endl;
   }



   cout << arr << "   -    " << *arr << endl;





   delete[] arr;
   arr=NULL;
   if(arr==NULL)
   {
    cout << "Memory deallocation is successfull...!" << endl;
   }
   else{
    cout << "Memeory deallocatoin is failed...!" << endl;
   }



    return 0;
}
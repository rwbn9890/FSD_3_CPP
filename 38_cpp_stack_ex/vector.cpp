#include<iostream>
using namespace std;
#include<vector>

class Stack{

    public:
    vector <int> arr;
    int top;
    
    Stack(){
        this->top = 0;
    }

    void push(int ele){
        arr.push_back(ele);
        
    }

    void pop(int ele){
        arr.pop_back();
    }




};


int main(){

    Stack st;

    st.push(2);



    return 0;
}
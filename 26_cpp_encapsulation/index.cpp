#include<iostream>
#include<string.h>

using namespace std;


class User {
   private:
        int no ;
    public:
        int roll;
    // char username[100];
    // char password[100];
    // int marks;
    // int fees;
    public:
      User showNum(int no){
                cout << "this fun is publick" << endl;
                this->no = no;
        }

        User getNum(){
            cout << this->no << endl;
        }


};




 int main(){


    User user1, user2;
  

    user1.showNum(100);
    user2.showNum(200);



    user2.getNum();
    user1.getNum();





    return 0;
}
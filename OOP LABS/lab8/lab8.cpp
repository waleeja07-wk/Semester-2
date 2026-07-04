/*QUESTION 1*/
// #include <iostream>
// using namespace std;
// class BankAccount{
//     private:
//      static int totalbalance;
//      public:
//     int depositMoney;

//     BankAccount(int d){
//        depositMoney = d;
//        totalbalance+=depositMoney;
//        cout<<"AMOUNT ADDED: "<<depositMoney<<endl;
//     }
    
//     ~BankAccount(){
//         cout<<"ACCOUNT CLOSED!"<<endl;
//     }

//     static void display_balance(){
//         cout<<"TOTAL BALANCE: "<<totalbalance<<endl;
//     }
// };
// int BankAccount::totalbalance=0;
// int main(){
//    BankAccount::display_balance();
//     BankAccount BA1(200);
//     BA1.display_balance();

//     BankAccount BA2(2000);
//     BA2.display_balance();
//        return 0;
// }

/*QUESTION 2*/
#include <iostream>
using namespace std;
class libraryBook{
    private:
    static int bookCounter;
    public:
    libraryBook(){
        
      if(bookCounter<5){
         bookCounter++;
      }
      else{
        cout<<"LIBRARY IS FULL, CAN'T ADD MORE BOOKS!"<<endl;
      }
    }

    ~libraryBook(){
        bookCounter--;
    }

    static void display_bookCount(){
        cout<<"BOOK COUNT: "<<bookCounter<<endl;
    }

};
int libraryBook::bookCounter=0;

int main(){
    libraryBook b1,b2,b3,b4;
    
    b4.display_bookCount();
    libraryBook b5;
    b5.display_bookCount();
    libraryBook b6;
    b6.display_bookCount();
         
     return 0;

}

// #include <iostream>
// #include "class_header.h"
// using namespace std;

// int main(){
//     Employee emp1,emp2,emp3,emp4,emp5,emp6,emp7,emp8,emp9;
//     Employee::display_empCount();
//     Employee emp10;
//     Employee::display_empCount();
//     Employee emp11;
//     Employee::display_empCount();
    
//      return 0;
// }


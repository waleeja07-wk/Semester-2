/*LAB 12 TASKS*/
/* QUESTION 1*/

// #include <iostream>
// using namespace std;
// // abstract class bcz of pure virtual fxn
// class person{
// protected:
//     int id;
//     char first_char_name;
// public:
//     virtual void show_data()=0; //pure virtual fxn
// };

// class student: public person{
// protected:
//     int total_marks;
// public:
//     void show_data() override {
//         id =1;
//         first_char_name='W';
//         cout<<id<<endl;
//         cout<<first_char_name<<endl;
//     }
// };
// int main(){
//    person *ptr;
// //    person ab; // this is wrong bcz abstract class
//   student st;
//   ptr = &st;
//   ptr->show_data();
  
// }

/* QUESTION 2*/

// #include<iostream>
// using namespace std;
// // Abstract class becuase it contains pure virtual function
// class Person{
   
//     protected:
       
//         int id;
       
//         char first_character_name;
       
//     public:
   
//         virtual void show_data() = 0; // pure virtual function
   
//         // virtual void get_data() = 0; // it is also virtual
   
// };

// class Student: public Person{
   
//     protected:
   
//         int total_marks;
   
//     public:
       
//         void show_data() override    // overridding base class pure virtual function
//         {
//             id = 1;
//             first_character_name = 'f';
//             cout<<id;
//             cout<<first_character_name;
//         }
   
// };  // Derived class completed

// class Employee: public Person{
   
//     protected:
   
//         float salary;
   
//     public:
       
//         void show_data() override    // overridding base class pure virtual function
//         {
//             salary = 1000.90;
//             id = 1;
//             first_character_name = 'z';
//             cout<<id;
//             cout<<first_character_name;
//             cout<<salary;
//         }
   
// };  // Derived class completed


// int main()
// {
//     // I want to call from top
   
//     Person *pr; // This is the base class pointer
   
//     char option ;
   
   
//     //Person ab; // This is wrong not possible becuase can not make object
   
//     Student st;  // to call with this is not good practice
//     // Second Showing employee data
//     Employee emp;
   
//     char check_again;
//     do
//      {
//         cout<<"Please which type data you want to show me";
//         cin>>option;  
   
//         if(option == 's')
//         {
//             pr = &st;  
//             // First showing student data
//             pr->show_data();
//         }
   
//         else if(option =='e')
//         {
//             pr = &emp;  // ptr = &Employee x    
//             // First showing student data
//             pr->show_data();
//         }
   
//         else
//         {
//             cout<<"Your option is wrong ";
//         } // if else ladder closing
       
//         cin>>check_again;
       
//     } while(check_again!='x');
   
// } // main closing





/* QUESTION 3*/
// #include <iostream>
// using namespace std;

// class paymentSystem{ 
// protected:
//     double amount;
//     double serviceFee;
//     double totalAmount;
//     double refundAmount;
// public:
//     virtual void pay()=0;
//     virtual void refund()=0;

//     void set_amount(){
//         cout<<"ENTER AMOUNT: ";
//         cin>>amount;
//     }
// };
// class EasyPaise: public paymentSystem{
//     public: 
    
//      void pay() override{
//         cout<<"EASYPAISA"<<endl;
//         serviceFee = amount * 0.02;
//         totalAmount = amount + serviceFee;
//         cout<<"ORIGINAL AMOUNT: "<<amount<<endl;
//         cout<<"SERVICE FEE: "<<serviceFee<<endl;
//         cout<<"FINAL AMOUNT: "<<totalAmount<<endl;
//      }
//     void refund() override {
//        serviceFee = amount * 0.02;
//         refundAmount = amount - serviceFee;
//         cout<<"REFUND AMOUNT: "<<refundAmount<<endl;
//     }  

// };

// class JazzCash: public paymentSystem{

//     public:
//      void pay() override{
//         cout<<"JAZZCASH"<<endl;
//          serviceFee = amount * 0.05;
//          totalAmount = amount + serviceFee;
//          cout<<"ORIGINAL AMOUNT: "<<amount<<endl;
//         cout<<"SERVICE FEE: "<<serviceFee<<endl;
//         cout<<"FINAL AMOUNT: "<<totalAmount<<endl;
//      }
//      void refund() override
//      {
//         serviceFee = amount * 0.05;
//          refundAmount = amount - serviceFee;
//           cout<<"REFUND AMOUNT: "<<refundAmount<<endl;
//      }
// };

// int main(){
//     paymentSystem *ps;
//     EasyPaise eobj;
//     JazzCash jobj;
//     char paymentsys;
//      char select_again;
//     do
//      {
//         cout<<"SELECT YOUR PAYMENT SYSTEM"<<endl;
//         cin>>paymentsys;  
   
//         if(paymentsys == 'e')
//         {
//             ps = &eobj;  
//             ps->set_amount();
//             ps->pay();
//             ps->refund();
//         }
//         else if(paymentsys=='j')
//         {
//             ps = &jobj;  
//             ps->set_amount();
//             ps->pay();
//             ps->refund();
//         }
//         else
//         {
//             cout<<"INVALID OPTION - SELECT AGAIN";
//         } 
//         cout<<"WANT ANOTHER TRANSACTION? (y/n): "<<endl;
//         cin>>select_again;
//     } while(select_again=='y');

//     return 0;
// }


/* QUESTION 4*/
// // #include <iostream>
// // using namespace std;

// // class FeeSystem{
// // protected:
// //     double amount;
// //     double processingCharge;
// //     double final_amount;
// //     int extraCharges;
// // public:
// //     virtual void submitFee()= 0;
// //     virtual void returnFee()= 0;
    
// // };

// // class BankTransfer: public FeeSystem{
// //  public:

// //     void submitFee() override{
// //         cout<<"ENTER FEE TO SUBMIT: "<<endl;
// //         cin>>amount;
// //         extraCharges=100;
// //        final_amount = amount + extraCharges;
// //         cout<<"FEE AMOUNT: "<<amount<<endl;
// //         cout<<"EXTRA CHARGES: "<<extraCharges<<endl;
// //         cout<<"TOTAL AMOUNT PAID: "<<final_amount<<endl;
// //     }

// //     void returnFee() override{
        
// //         cout<<"REFUND FEE: "<<amount<<endl;
// //     }

    
// // };

// // class CreditCard: public FeeSystem{
    
// //     void submitFee() override{
// //         cout<<"ENTER FEE TO SUBMIT: "<<endl;
// //         cin>>amount;
// //        processingCharge= amount*0.03;
// //        final_amount = amount + processingCharge;
// //         cout<<"FEE AMOUNT: "<<amount<<endl;
// //         cout<<"EXTRA CHARGES: "<<processingCharge<<endl;
// //         cout<<"TOTAL AMOUNT PAID: "<<final_amount<<endl;
// //     }

// //     void returnFee() override{
        
// //         cout<<"REFUND FEE: "<<amount<<endl;
// //     }

     
// // };

// // int main(){
// //     FeeSystem *fs;
// //     BankTransfer bobj;
// //     CreditCard cobj;
// //     char paymentMethod;
// //     char select_again;
// //     do
// //      {
// //         cout<<"SELECT YOUR PAYMENT METHOD"<<endl;
// //         cin>>paymentMethod;  
   
// //         if(paymentMethod == 'b')
// //         {
// //             fs = &bobj;  
// //             fs->submitFee();
// //             fs->returnFee();
// //         }
// //         else if(paymentMethod=='c')
// //         {
// //             fs = &cobj;  
// //             fs->submitFee();
// //             fs->returnFee();
// //         }
// //         else
// //         {
// //             cout<<"INVALID OPTION - SELECT AGAIN";
// //         } 
// //         cout<<"WANT ANOTHER TRANSACTION? (y/n): "<<endl;
// //         cin>>select_again;
// //     } while(select_again=='y');

// //     return 0;
// // }





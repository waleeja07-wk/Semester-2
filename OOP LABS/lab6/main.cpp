// #include <iostream>
// #include "class_header.h"
// using namespace std;

// int main(){
//     myclass myobj;
//     myobj.mymethod();
//     return 0;
// }

// /*TASK 1*/
// #include <iostream>
// using namespace std;
// class student{
//     public:
//     string name;
//     int roll_no;
//     float marks;
//     void display_info(student s);
// };
// void student::display_info(student data){
//     cout<<"=====DISPLAY STUDENT DATA======"<<endl;
//     cout<<"NAME: "<<data.name<<endl;
//     cout<<"ROLL NUM: "<<data.roll_no<<endl;
//     cout<<"MARKS: "<<data.marks<<endl;
// }
// int main(){
//    student data;
//    cout<<"NAME: ";
//    getline(cin,data.name);
//    cout<<"ROLL NUM: ";
//    cin>>data.roll_no;
//    cout<<"MARKS: ";
//    cin>>data.marks;
//    data.display_info(data);
//   return 0;
// }

// /*TASK 2*/
// #include <iostream>
// using namespace std;
// class book{
//    public:
//    string book_title;
//    string author_name;
//    int price;
//    void display_details(book b1);
// };

// void book::display_details(book book1){
//     cout<<"NAME: "<<book1.book_title<<endl;
//     cout<<"ROLL NUM: "<<book1.author_name<<endl;
//     cout<<"MARKS: "<<book1.price<<endl;
// }

// int main(){
//    book b1,b2,b3;
//    //book 1
//    cout<<"BOOK 1 TITLE: ";
//    getline(cin,b1.book_title);
//    cout<<"AUTHOR NAME: ";
//    cin>>b1.author_name;
//    cout<<"PRICE: ";
//    cin>>b1.price;
   

//    //book 2
//    cout<<"BOOK 2 TITLE: ";
//    cin.ignore();
//    getline(cin,b2.book_title);
//    cout<<"AUTHOR NAME: ";
//    cin>>b2.author_name;
//    cout<<"PRICE: ";
//    cin>>b2.price;
   

//    //book 3
//    cout<<"BOOK 3 TITLE: ";
//    cin.ignore();
//    getline(cin,b3.book_title);
//    cout<<"AUTHOR NAME: ";
//    cin>>b3.author_name;
//    cout<<"PRICE: ";
//    cin>>b3.price;
//    cout<<"===BOOK 1 DETAILS==="<<endl;
//    b1.display_details(b1);
//    cout<<"===BOOK 2 DETAILS==="<<endl;
//    b2.display_details(b2);
//    cout<<"===BOOK 3 DETAILS==="<<endl;
//    b3.display_details(b3);
//    return 0;
// }




/*TASK 3*/
// #include <iostream>
// using namespace std;
// class rectangle{
//   public:
//     int length;
//     int width;
//     void calculateArea(rectangle val);
// };
// void rectangle::calculateArea(rectangle val){
//      int l=val.length;
//      int w=val.width;
//      int rect;
//      rect=l*w;

//      cout<<"AREA = "<<rect;
// }

// int main(){
//     rectangle data;
//     cout<<"LENGTH: ";
//     cin>>data.length;
//     cout<<"WIDTH: ";
//     cin>>data.width;
//     data.calculateArea(data);
// }




/*TASK 4*/
// #include <iostream>
// using namespace std;
// class result{
 
//     string name;
//     string roll_no;
//     int marks[5];
// public:
//     void inputData(){
//         cout<<"NAME: ";
//     cin>>name;
//     cout<<"ROLL_NUM: ";
//     cin>>roll_no;
//     cout<<"MARKS: ";
//     for(int i=0;i<5;i++){
//        cin>>marks[i];
//        if(marks[i]<0 || marks[i]>100){

//         i--;
//        }
//     }
//     }
//     float calculateAverage() {
//         float avg;
//         int sum = 0;
//         for (int i=0;i<5;i++){
//             sum += marks[i];
//         }

//         avg=sum / 5.0;
//         return avg;
//     }

//         void displayResult() {
//         cout << "====RESULT===="<<endl;
//         cout<<"Name: "<<name<<endl;
//         cout<<"ROLL NUM: "<<roll_no<<endl;
//         cout<<"MARKS: "<<endl;
//         for(int i=0;i<5;i++) {
//         cout<<marks[i]<<" ";
//         }
//         cout<<endl;
//         float avg = calculateAverage();
//         cout<<"AVERAGE:"<<avg<<endl;
//         cout<<"STATUS: ";
//         if(avg>=50)
//         cout<<"PASS"<<endl;
//         else
//         cout<<"FAIL"<<endl;
//     }
// };

// int main(){
//     result std1, std2;
//     cout<<"Enter details for Student 1: "<<endl;
//     std1.inputData();
//     cout<<"Enter details for Student 2: "<<endl;
//     std2.inputData();

//     std1.displayResult();
//     std2.displayResult();

//     return 0;
// }


/*QUESTION 5*/
#include <iostream>
#include "class_header.h"
using namespace std;
int main(){
    employee emp1, emp2;

    cout << "Enter details for Employee 1:\n";
    emp1.inputData();
    cout << "Enter details for Employee 2:\n";
    emp2.inputData();

    emp1.displayDetails();
    emp2.displayDetails();

    return 0;

}

// #include <iostream>
// #include "class_header.h"
// using namespace std;
// void myclass::mymethod(){
//     cout<<"hello!";
// }

#include <iostream>
 #include "class_header.h"
 using namespace std;
 void employee::inputData(){
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Employee ID: ";
    cin>>employee_id;
    cout<<"Enter Basic Salary: ";
    cin>>basic_salary;
}
int employee::calculateBonus() {
    int bonus=basic_salary * 0.10;
    return bonus;
}
void employee::displayDetails() {
    int bonus = calculateBonus();
    double finalSalary = basic_salary + bonus;
    cout<<"===EMPLOYEE DETAILS==="<<endl;
    cout<<"NAME: "<<name<<endl;
    cout<<"EMPLOYEE ID: "<<employee_id<<endl;
    cout<<"BASIC SALARY: "<<basic_salary<<endl;
    cout<<"BONUS: "<<bonus<<endl;
    cout<<"FINAL SALARY: "<<finalSalary<<endl;
}






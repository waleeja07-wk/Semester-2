// QUESTION 3
#include "class.h"
#include <iostream>
using namespace std;
employee::employee(string n, int i, double s){
    emp_name=n;
    emp_id=i;
    basic_salary=s;
}

double employee::calculatebonus() {
        return basic_salary * 0.10;  
    }

double employee::updatedSalary(){
     return basic_salary+calculatebonus();
}

void employee::displayResult(){
       cout<<"NAME: "<<emp_name<<endl;
       cout<<"EMP ID: "<<emp_id<<endl; 
        cout<<"BASIC SALARY: "<<basic_salary<<endl;
       cout<<"BONUS: "<<calculatebonus()<<endl;
       cout<<"UPDATED SALARY: "<<updatedSalary()<<endl;
    }
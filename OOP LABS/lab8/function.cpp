 #include<iostream>
 #include "class_header.h"
 Employee::Employee(){
        
      if(empCount<10){
         empCount++;
      }
      else{
        cout<<"NO MORE EMPLOYEES CAN BE ADDED!"<<endl;
      }
    }
Employee::~Employee(){
        empCount--;
    }
void Employee::display_empCount(){
        cout<<"EMPLOYEE COUNT: "<<empCount<<endl;
    }
int Employee::empCount=0;


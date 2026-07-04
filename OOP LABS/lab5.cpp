/*QUESTION 1*/
#include <iostream>
using namespace std;
struct student{
    string name;
    int ID;
    int sub_count;
    float scores[5];
};
void processPersonData(student s1){
    float sum=0;
    float avg;
    int second_largest;
    cout<<"=====DISPLAY RESULTS====="<<endl;
    cout<<"NAME: "<<s1.name<<endl;
    cout<<"ID: "<<s1.ID<<endl;
     cout<<"GRADES: ";
    for(int i=0;i<s1.sub_count;i++){
    cout<<s1.scores[i];
    cout<<" ";
    sum+=s1.scores[i];
    }
    cout<<endl;
    avg=sum/s1.sub_count;
    cout<<"AVERAGE: "<<avg;
    cout<<endl;
    float largest=s1.scores[0];
    for(int j=0;j<s1.sub_count;j++){
        if(s1.scores[j]>largest){
            largest=s1.scores[j];
        }
    }
    float sec_largest=s1.scores[0];
    for(int k=0;k<s1.sub_count;k++){
        if(s1.scores[k]>sec_largest && s1.scores[k]<largest){
            sec_largest=s1.scores[k];
        }
    }

    cout<<"second largest: "<<sec_largest;
    
}
int main(){
    student s1;
    student *s1_ptr=&s1;
    cout<<"ENTER STUDENT NAME:"<<endl;
    cin>>s1_ptr->name;
    cout<<"ENTER STUDENT ID:"<<endl;
    cin>>s1_ptr->ID;
    cout<<"ENTER NUMBER OF SCORES:"<<endl;
    cin>>s1_ptr->sub_count;
    cout<<"ENTER SCORE:"<<endl;
    for(int i=0;i<s1_ptr->sub_count;i++){
    cout<<"SUB "<<i+1<<endl;
    cin>>s1_ptr->scores[i];
    }
    processPersonData(s1);

}


/*QUESTION 2*/
// #include <iostream>
// #include <string>
// using namespace std;
// struct Emp{
//   public:
//    char employeeName[50];
//     char jobTitle[30];
//     int employeeCode;
//     int monthCount;
//     float monthlySalary[5];
//     float *base_address; 
// };
// void calculate_display_Payroll(Emp *ptr_to_e,float *monthlySalary,int extra){
//       float sum=0;
//       float highest=monthlySalary[0];
      
//       for(int i=0;i<ptr_to_e->monthCount;i++){
//         sum+=monthlySalary[i];
      
//       }
//       float avg=sum/ptr_to_e->monthCount;
      
//     for(int i=0;i<ptr_to_e->monthCount;i++){
//       if(monthlySalary[i]>highest){
//         highest=monthlySalary[i];
//       }
//     }
    

//     //DISPLAY
//     cout << "--- PAYROLL REPORT ---"<<endl;

//     cout<<"EMPLOYEE NAME: "<<ptr_to_e->employeeName<<endl;
//     cout<<"JOB TITLE: "<<ptr_to_e->jobTitle<<endl;
//     cout<<"EMPLOYEE CODE: "<<ptr_to_e->employeeCode<<endl;
//   cout<<"MONTHLY SALARY: "<<endl;
//   for(int i=0;i<ptr_to_e->monthCount;i++){
//       cout<<"MONTH "<<i+1<<" ";
//      cout<<ptr_to_e->monthlySalary[i];
//      cout<<endl;
//   }
//     cout<<"AVERAGE SALARY : "<<avg<<endl;
//     cout<<"HIGHEST MONTHLY SALARY: "<<highest<<endl;
//     cout<<"AVERAGE SALARAY + EXTRA CHARGES: "<<avg+extra<<endl;

// }
// int main(){
//   Emp e;
//   Emp *ptr_to_e=&e;
//   int extra_amount;
//   cout<<"EMPLOYEE NAME: ";
//   cin.getline(ptr_to_e->employeeName, sizeof(ptr_to_e->employeeName));


//   cout<<"JOB TITLE: ";
//    cin.getline(ptr_to_e->jobTitle, sizeof(ptr_to_e->jobTitle));


//   cout<<"EMPLOYEE CODE: ";
//   cin>>ptr_to_e->employeeCode;

//   cout<<"MONTH COUNT: ";
//   cin>>ptr_to_e->monthCount;

//   cout<<"MONTHLY SALARY: "<<endl;
//   for(int i=0;i<ptr_to_e->monthCount;i++){
//       cout<<"MONTH "<<i+1<<" ";
//      cin>>ptr_to_e->monthlySalary[i];
//      cout<<endl;
//   }
//   cout<<"ENTER EXTRA AMOUNT: ";
//   cin>>extra_amount;
//  ptr_to_e->base_address=ptr_to_e->monthlySalary;

// calculate_display_Payroll(ptr_to_e,ptr_to_e->base_address,extra_amount);

// }
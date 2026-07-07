/* LAB LEARNING*/

//aggregation can exist independently
//base class- library khtm ho to book class khtm nhi hogi, book can exist independently

//compostion need 1 obj in main
//aggregation need 2 obj in main

/*LAB 13 TASKS*/
/* QUESTION 1*/
// #include <iostream>
// using namespace std;
  
// class MedicalRecord{
// private:
//     string disease_name;
//     double roomCharges;
//     double treatmentCost;
// public:
//     MedicalRecord(){
//         disease_name = "null";
//     }
//     MedicalRecord(string dn, double r, double t):
//      disease_name(dn), roomCharges(r), treatmentCost(t){}

//     double calculate_totalCharges(){
//         return roomCharges+treatmentCost;
//     }

//     void display_medicalRecord(){
//         cout<<"DISEASE NAME: "<<disease_name<<endl;
//         cout<<"ROOM CHARGES: "<<roomCharges<<endl;
//         cout<<"TREATMENT COST: "<<treatmentCost<<endl;
//     }
// };

// class patientAdmission{
// private:
//     int admissionID;
//     string patientName;
//     MedicalRecord md1;
// public:
//     patientAdmission(int id, string pn, string dn, double r, double t ): md1(dn, r,t){
//         admissionID=id;
//         patientName=pn;
//     }

//     void display_patientAdmission(){
        
//         cout<<"ADMISSION ID: "<<admissionID<<endl;
//         cout<<"PATIENT NAME: "<<patientName<<endl;
//         md1.display_medicalRecord();
//         cout<<"TOTAL BILL: "<<md1.calculate_totalCharges()<<endl;

//     }
// };

// int main(){
//     patientAdmission ad1(1, "Ali", "Cancer", 25000, 15000);
//     patientAdmission ad2(2, "Ahmed", "Pnemonia", 27000, 2000);
//     patientAdmission ad3(3, "Ehtisham", "Stomach pain", 30000, 2500);
     
//     cout<<"=====PATIENT 1 DETAILS====="<<endl;
//     ad1.display_patientAdmission();
//     cout<<"=====PATIENT 2 DETAILS====="<<endl;
//     ad2.display_patientAdmission();
//     cout<<"=====PATIENT 3 DETAILS====="<<endl;
//     ad3.display_patientAdmission();

//     return 0;

// }

/* QUESTION 2*/
// #include <iostream>
// using namespace std;

// class Professor{
// private:
//     int ProfessorID;
//     string ProfessorName;
//     string Specialization;
// public:
//     Professor(int id, string n, string s):
//      ProfessorID(id), ProfessorName(n), Specialization(s){}
//     void show_professor(){
//         cout<<"PROFESSOR's ID: "<<ProfessorID<<endl;
//         cout<<"PROFESSOR'S NAME: "<<ProfessorName<<endl;
//         cout<<"SPECIALIZATION: "<<Specialization<<endl;
//     }
// };
 
// class department{
//     string deptName;
//     Professor* pobj;
// public:
//     department(string depn, Professor* p): deptName(depn), pobj(p) {}
//     void show_dept(){
        
//          cout<<"DEPARTMENT NAME: "<<deptName<<endl;
//         pobj->show_professor();
        
//     }

// };

// int main(){
//     Professor p1(101, "JAMEEL KHAN", "ZOOLOGY");
//     Professor p2(102, "SHAWAIZ SHAH", "MATHEMATICS");

//     department dept("AI", &p1);
    
//     cout<<"=====DEPARTMENT ASSIGNED====="<<endl;
//     dept.show_dept();
//     cout<<"=====DEPARTMENT NOT ASSIGNED===== "<<endl;
//     p2.show_professor();
//     return 0;
// }


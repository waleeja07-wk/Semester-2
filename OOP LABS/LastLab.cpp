//aggregation can exist independently
//base class- library khtm ho to book class khtm nhi hogi, book can exist independently

//compostion need 1 obj in main
//aggregation need 2 obj in main

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



#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// Structure to hold course information
struct Course {
    string name;
    double marks;
    int credits;
};

// Function to map marks to Grade Points and Letter Grades
void getGradeData(double marks, string &letterGrade, double &gradePoints) {
    if (marks >= 90.0) { letterGrade = "A+"; gradePoints = 4.0; }
    else if (marks >= 86.0) { letterGrade = "A";  gradePoints = 4.0; }
    else if (marks >= 82.0) { letterGrade = "A-"; gradePoints = 3.7; }
    else if (marks >= 78.0) { letterGrade = "B+"; gradePoints = 3.3; }
    else if (marks >= 74.0) { letterGrade = "B";  gradePoints = 3.0; }
    else if (marks >= 70.0) { letterGrade = "B-"; gradePoints = 2.7; }
    else if (marks >= 66.0) { letterGrade = "C+"; gradePoints = 2.3; }
    else if (marks >= 62.0) { letterGrade = "C";  gradePoints = 2.0; }
    else if (marks >= 58.0) { letterGrade = "C-"; gradePoints = 1.7; }
    else if (marks >= 54.0) { letterGrade = "D+"; gradePoints = 1.3; }
    else if (marks >= 50.0) { letterGrade = "D";  gradePoints = 1.0; }
    else { letterGrade = "F"; gradePoints = 0.0; }
}

int main() {
    int numCourses;
    
    cout << "=================================\n";
    cout << "   ACADEMIC GPA CALCULATOR       \n";
    cout << "=================================\n\n";
    
    cout << "Enter the number of courses: ";
    while (!(cin >> numCourses) || numCourses <= 0) {
        cout << "Invalid input. Please enter a valid number of courses: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }

    vector<Course> courses(numCourses);
    double totalQualityPoints = 0.0;
    int totalCredits = 0;

    // Input loop
    for (int i = 0; i < numCourses; i++) {
        cin.ignore(); // Clear buffer
        cout << "\n--- Course " << (i + 1) << " ---\n";
        cout << "Course Name/Code (Optional): ";
        getline(cin, courses[i].name);
        if (courses[i].name.empty()) {
            courses[i].name = "Course " + to_string(i + 1);
        }

        // Validate Marks Input
        cout << "Enter Total Marks (%): ";
        while (!(cin >> courses[i].marks) || courses[i].marks < 0 || courses[i].marks > 100) {
            cout << "Invalid marks. Please enter a value between 0 and 100: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }

        // Validate Credits Input
        cout << "Enter Credit Hours: ";
        while (!(cin >> courses[i].credits) || courses[i].credits <= 0) {
            cout << "Invalid credit hours. Please enter a number greater than 0: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }

    // Output Report Generation
    cout << "\n\n==================================================================\n";
    cout << left << setw(20) << "Course" 
         << setw(12) << "Marks (%)" 
         << setw(10) << "Grade" 
         << setw(10) << "Credits" 
         << "Grade Points\n";
    cout << "==================================================================\n";

    for (const auto& course : courses) {
        string letterGrade;
        double gradePoints;
        
        getGradeData(course.marks, letterGrade, gradePoints);
        
        double courseQualityPoints = gradePoints * course.credits;
        totalQualityPoints += courseQualityPoints;
        totalCredits += course.credits;

        cout << left << setw(20) << course.name 
             << setw(12) << fixed << setprecision(1) << course.marks 
             << setw(10) << letterGrade 
             << setw(10) << course.credits 
             << fixed << setprecision(2) << gradePoints << "\n";
    }

    cout << "==================================================================\n";
    
    if (totalCredits > 0) {
        double finalGPA = totalQualityPoints / totalCredits;
        cout << "Total Credit Hours Registered: " << totalCredits << "\n";
        cout << "Your Semester GPA            : " << fixed << setprecision(2) << finalGPA << " / 4.00\n";
    } else {
        cout << "No credit hours recorded. GPA cannot be calculated.\n";
    }
    cout << "==================================================================\n";

    return 0;
}
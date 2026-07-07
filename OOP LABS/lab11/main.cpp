/*LAB 11 TASKS*/
/* QUESTION 1*/

// #include <iostream>
// using namespace std;
// class Person{
// protected:
//     int age;
//     string name;
// public:
//     Person(char n, int a){
//         cout << "I AM IN BASE CLASS"<<endl;
//         name = n;
//         age = a;
//     }
//     ~Person(){
//         cout << "BASE CLASS DESTRUCTOR"<<endl;
//     };
//     void get_data(){
//         cout << "ENTER NAME: ";
//         cin >> name;
//         cout << "ENTER AGE:" ;
//         cin >> age;
//     }
//     void show_data(){
//         cout << "NAME: " << name << endl;
//         cout << "AGE:" << age <<endl;
//     }
// };
// class Student: public Person{
// private:
//     float fee;
//     int roll_number;
// public:
//     Student(float f, int r, int a, char n):  Person(n, a){
//     }
//     void set_Student_data(int r)
//     {
//         get_data();
//         roll_number = r;
//     }
//     void calculate_fee(float f){
//         fee = f;
//         fee = fee+1000;
//     }
//     void show_student_data(){
//         show_data();
//         cout <<"ROLL NUMBER: " <<roll_number<<endl;
//         cout << "FEE: " <<fee<<endl;
//     }
// };
// int main(){
//     Student s1(24000.90, 1, 25, 'W');
    
//     s1.set_Student_data(1);
//     s1.calculate_fee(2200);
//     s1.show_student_data();
//     return 0;
// }


/* QUESTION 2*/

#include <iostream>
using namespace std;

class person{
protected:
    string name;
    int age;
public:
    void setPersonDetail(string n, int a){
       name = n;
       age = a;
    }
    void displayPersonDetail(){
      cout<<"NAME: "<<name<<endl;
      cout<<"AGE: "<<age<<endl;
    }

};
class AcademicRecord: virtual public person{
protected:
    float GPA;
    string major;
public:
    void setAcademicDetails(float gpa, string m){
         GPA = gpa;
         major = m;
    }
    void displayAcademicDetails(){
       cout<<"GPA: "<<GPA<<endl;
       cout<<"MAJOR: "<<major<<endl;
    }
};
class scholarship : virtual public person, public AcademicRecord{
private:
    int scholarshipAmount;
public:
    void evaluateScholarship(){
      if (GPA>3.5 && age>25){
          scholarshipAmount = 50000;
      }
      else{
            scholarshipAmount=0;
      }
    }
    void displayScholarshipDetails(){
           cout<<"SCHOLARSHIP AWARDED: "<<scholarshipAmount<<endl;
    }
};

int main(){
    scholarship s1;
    s1.setPersonDetail("WALEEJA", 18);
    s1.setAcademicDetails(3.3, "AI");
    s1.evaluateScholarship();

    s1.displayPersonDetail();
    s1.displayAcademicDetails();
    s1.displayScholarshipDetails();
    cout<<endl;

    scholarship s2;
    s2.setPersonDetail("ALI", 29);
    s2.setAcademicDetails(3.89, "CS");
    s2.evaluateScholarship();

    s2.displayPersonDetail();
    s2.displayAcademicDetails();
    s2.displayScholarshipDetails();

return 0;
}


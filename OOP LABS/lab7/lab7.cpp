/* LAB 7 TASKS*/
// QUESTION 1

// #include <iostream>
// using namespace std;
// class student{
//     private:
//    string name;
//    int roll_no;
//    int marks;
// public:
//    student(){
//     name = "Default";
//     roll_no = 101;
//     marks = 50;
//    }

//   student(string n, int r, int m){
//     name = n;
//     roll_no = r;
//     marks = m;
//    }

//    void displayStudentInfo(){
//     cout<<"NAME: "<<name<<endl;
//     cout<<"ROLL NUMBER: "<<roll_no<<endl;
//     cout<<"MARKS: "<<marks<<endl;
//    }
// };

// int main(){
//     student s1;
//      student s2("Areej", 202, 89);
//      student s3("Waleeja", 302, 37);
//      student s4;

//     cout<<"====STUDENT 1 INFO===="<<endl;
//     s1.displayStudentInfo();
//     cout<<"====STUDENT 2 INFO===="<<endl;
//     s2.displayStudentInfo();
//     cout<<"====STUDENT 3 INFO===="<<endl;
//     s3.displayStudentInfo();
//     cout<<"====STUDENT 4 INFO===="<<endl;
//     s4.displayStudentInfo();
//      return 0;
// }

//QUESTION 2
#include <iostream>
using namespace std;
class result{
    private:
    string student_name;
    int roll_no;
    int marks[5];
    
    public:
    result(){
        student_name = "Default";
        roll_no = 200;
      for(int i=0;i<5;i++){
        marks[i]=0;
    }
    }
 result(string n, int r, int m[5]){
        student_name = n;
        roll_no =r;
       for(int i=0;i<5;i++){
        marks[i]=m[i];
    }
    }

    float calculateAverage(){
        float average;
        int sum=0;
    for(int i=0;i<5;i++){
        sum+=marks[i];
    }
        average = sum/5.0;
        return average;
    }


    void displayResult(){
       cout<<"NAME: "<<student_name<<endl;
       cout<<"ROLL NUMBER: "<<roll_no<<endl;
       for(int i=0;i<5;i++){
        cout<<"MARKS "<<i+1<<" "<<marks[i]<<endl;
       }
       cout<<"AVERAGE: "<<calculateAverage()<<endl;
    }

};
int main(){
    result R1;
    int marks[5] = {34, 56, 67, 78, 90};
    result R2("waleeja", 101, marks);

    R1.displayResult();
     R2.displayResult();
    

}






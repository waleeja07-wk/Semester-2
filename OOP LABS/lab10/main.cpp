#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// class vector{
//     private:
//     int x,y;
//     public:
//     vector(){
//         x=0;
//         y=0;
//     }
//     vector(int n1, int n2){
//       x=n1;
//        y=n2;
//     }
//     vector operator + (vector &first_obj){
//         vector resultant;
//         resultant.x = x + first_obj.x;
//         resultant.y = y + first_obj.y;
//         return resultant;

//     }
//     void show(){
//         cout<<x;
//         cout<<y;
//     }
    
// };


// int main(){
//   vector v1(2,3), v2(3,4);
//   vector v3=v1+v2;

//   v1.show();
//   cout<<endl;
//   v2.show();
//  cout<<endl;
//  v3.show();
//  return 0;
// }


//QUESTION 1
class Distance{
    private:
   int feet;
   int inch;

   public:
   Distance (){
    feet =0;
    inch =0;
   }
  Distance operator + (Distance &d){
     Distance temp;
     int inches=inch + d.inch;
     temp.feet=feet + d.feet + inches/12;
     temp.inch =inches % 12;
     return temp;
  }

  bool operator == (Distance &d){
    int total1 = this->feet * 12 + this->inch;
    int total2 = d.feet * 12 + d.inch;

    return total1==total2;
  }

  void setData(int f, int i){
         feet = f;
         inch = i;
  }
  void showData(){
        cout<<feet<<" feet ";
        cout<<inch<<" inches "<<endl;
  }
   
};
int main(){
   Distance d1,d2,d3,d4;
    d1.setData(2,5);
    d2.setData(6,10);
    d4.setData(2,5);

    cout<<"DISTANCE 1: "<<endl;
    d1.showData();
    cout<<"DISTANCE 2: "<<endl;
    d2.showData();
    d3 = d1+d2;
   cout<<"D1 + D2: "<<endl;
   d3.showData();
if(d1==d4){
     cout<<"D3 AND D4 ARE EQUAL"<<endl;
}
else{
    cout<<"D3 AND D4 ARENOT EQUAL"<<endl;
}
    return 0;
}


// QUESTION 2
// class student{
//     private:
//     char* name;
//     int roll_no;
// public:
//    student(const char *n, int r){
//      name = new char[strlen(n)+1];
//      strcpy(name, n);
//      roll_no = r;
//    }
//    ~student(){
//     delete [] name;
//    }

//    void showData(){
//     cout<<"NAME: "<<name<<endl;
//     cout<<"ROLL NUM: "<<roll_no<<endl;
//    }

// };

// int main(){
//     student obj_1("Usman", 101);
//     student obj_2=obj_1;
    
//     obj_1.showData();
//     obj_2.showData();
//     return 0;
// }


//QUESTION 3
// class student{
//     private:
//     char* name;
//     int roll_no;
// public:
//    student(const char *n, int r){
//      name = new char[strlen(n)+1];
//      strcpy(name, n);
//      roll_no = r;
//    }
//    ~student(){
//     delete [] name;
//    }

//     student(student &obj){
//      name = new char[strlen(obj.name)+1];
//      strcpy(name, obj.name);
//        roll_no = obj.roll_no;
//     }
//    void showData(){
//     cout<<"NAME: "<<name<<endl;
//     cout<<"ROLL NUM: "<<roll_no<<endl;
//    }
// };

// int main(){
//     student obj_1("Usman", 101);
//     student obj_2(obj_1);
    
//     obj_1.showData();
//     obj_2.showData();
//     return 0;
// }
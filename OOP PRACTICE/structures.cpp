#include <iostream>
using namespace std;
struct state{
      string state_name;
      string city;
};

struct address{
    state st1;
    string country;
};

struct employee{
    int E_id;
    string E_name;
    int E_age;
    address add1;
};

int main(){
      employee *emp = new employee[2];
       for(int i=0;i<2;i++){
        cout<<"EMPLOYEE "<<i+1<<" INFO"<<endl;
        cout<<"ID : ";
        cin>>emp[i].E_id;
        cout<<"NAME : ";
        cin>>emp[i].E_name;
        cout<<"AGE : ";
        cin>>emp[i].E_age;
        cout<<"COUNTRY : ";
        cin>>emp[i].add1.country;
        cout<<"STATE : ";
        cin>>emp[i].add1.st1.state_name;
        cout<<"CITY : ";
        cin>>emp[i].add1.st1.city;
       }
        cout<<endl;
        
       for(int i=0;i<2;i++){
        cout<<"EMPLOYEE "<<i+1<<" INFO"<<endl;
        cout<<"ID : ";
        cout<<emp[i].E_id<<endl;
        cout<<"NAME : ";
        cout<<emp[i].E_name<<endl;
        cout<<"AGE : ";
        cout<<emp[i].E_age<<endl;
        cout<<"COUNTRY : ";
        cout<<emp[i].add1.country<<endl;
        cout<<"STATE : ";
        cout<<emp[i].add1.st1.state_name<<endl;
        cout<<"CITY : ";
        cout<<emp[i].add1.st1.city<<endl;
       }

       delete [] emp;

}

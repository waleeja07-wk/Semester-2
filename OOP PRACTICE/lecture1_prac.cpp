#include <iostream>
using namespace std;
// int main(){
//     int v1=44;
//     int *p1=&v1;
//     int *p2;
//     p2=p1;
//     cout<<*p1<<endl;  //44
//     cout<<*p2<<endl;  //44
//     cout<<p1<<endl;  //add v1
//     cout<<p2<<endl;
//     getchar();
//     return 0;
// }


/* ALIASING*/
// int main(){
//     int p=8;
//     int q=p;
//     cout<<"p="<<p<<endl<<"q="<<q<<endl;
//     q=10;
//      cout<<"p="<<p<<endl<<"q="<<q<<endl;
// }


// int main(){
//     int *p=new (nothrow) int(9);
//     int *q=p;
//     cout<<"*p="<<*p<<endl<<"*q="<<*q<<endl;
//    *p=8;
//    cout<<"*p="<<*p<<endl<<"*q="<<*q<<endl;

// }


/*Pass by value*/
// void value(int a){
//     a++;
//      cout<<a<<endl;
//     cout<<&a<<endl;
// }
// int main(){
//     int a=8;
    
//     cout<<a<<endl;
//     cout<<&a<<endl;
//     value(a);
//     cout<<a<<endl;
//     cout<<&a<<endl;
// }



/*Pass by reference using & operator*/
// void value(int &a){
//     a++;
//      cout<<a<<endl;
//     cout<<&a<<endl;
// }
// int main(){
//     int a=8;
    
//     cout<<a<<endl;
//     cout<<&a<<endl;
//     value(a);
//     cout<<a<<endl;
//     cout<<&a<<endl;
// }
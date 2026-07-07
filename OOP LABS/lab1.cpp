/* LAB LEARNING */

// #include <iostream>
// using namespace std;

/*TAKE INPUT AND PRINT OUTPUT*/
// int main(){
//     int a;
//     cout<<"enter value"<<endl;
//     cin>>a; //scanf("%d", &a);

//     cout<<"the value is "<<a;
//     return 0;
    
// }

/*POINTER AND POINTER TO POINTER*/
// int main(){
//     int a=10;
//     int *p=&a;
//     int **pp=&p;

//     cout<<"enter value of a "<<a<<endl;
//     cout<<"enter value of p "<<*p<<endl;
//     cout<<"enter value of pp "<<**pp;
//     cout<<"enter address of a "<<&a<<endl;
//     cout<<"enter address of p "<<p<<endl;   
//     cout<<"enter address of pp "<<pp<<endl;
//    return 0;
// }

/*CALL BY REFERENCE USING POINTER*/
// int fun(int a, int b, int c, int *total){
//     *total = a + b + c;
//     return 0;
// }
// int main(){
//     int sub1=10;
//     int sub2=20;
//     int sub3=30;
//   int total =0;

//    cout<<"enter value of total "<<total<<endl;
//   int return_val=fun(sub1,sub2,sub3, &total);
//   cout<<"enter value of total "<<total;

//   return 0;
// }


/*CALL BY REFERENCE USING POINTER TO POINTER*/
// int fun(int a, int b, int c, int **total){
//     **total = a + b + c;
//     return 0;
// }
// int main(){
//     int sub1=10;
//     int sub2=20;
//     int sub3=30;
//   int total =0;
//   int *ptr=&total;
//    cout<<"enter value of total "<<total<<endl;
//   int return_val=fun(sub1,sub2,sub3, &ptr);
//   cout<<"enter value of total "<<total;

//   return 0;
// }

/*LAB 1 TASK*/
    /*QUESTION 1*/
#include <iostream>
using namespace std;

void swap(int *num1, int *num2){
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
    
}
void mean(int a, int b, float *mean_val){
    
    *mean_val=(a+b)/2.0;

}
void range(int a, int b,int *range){
    
    if(a>b){
        *range = (a-b);
    }
    else{
        *range = (b-a);
    }
}
void normalized(int a, int b, int *norm_a, int *norm_b){
    
 *norm_a=(a)/(a);
 *norm_b=(b)/(b);
}
int main(){
    int num1=10;
    int num2=20;
    
     cout<<"num1 before swap " <<num1<<endl;
     cout<<"num2 before swap " <<num2<<endl;
     int range_val=0;
     float mean_val=0;
     int norm_a=0;
     int norm_b=0;

     swap(&num1, &num2);
     cout<<"num1 after swap "<<num1<<endl;
    cout<<"num2 after swap "<<num2<<endl;

     mean(num1,num2,&mean_val);
     cout<<"mean "<<mean_val<<endl;

     range(num1,num2,&range_val);
     cout<<"range "<<range_val<<endl;

     normalized(num1,num2,&norm_a,&norm_b);
     cout<<"Normalized value of first number "<<norm_a<<endl;
     cout<<"Normalized value of second number "<<norm_b<<endl;

    return 0;
}


/*QUESTION 2*/
// #include <iostream>
// using namespace std;
// #define SUB 3
// void tot_marks(int *marks, int *sum){
//      *sum=0;
//     for(int i=0;i<SUB;i++){
//         *sum += *(marks+i);
//     }
  
// }
// void percentage(int *sum, float *percent){
    
//     *percent = (*sum/ (SUB*100.0))*100;

// }
// int main(){
//     int sub_marks[SUB];

// for(int i=0;i<SUB;i++){
//     cout<<"MARKS OF SUB "<<i+1<<endl;
//     cin>>sub_marks[i];   
// }
// int sum;
// float percent;
//   tot_marks(sub_marks,&sum);
//   percentage(&sum,&percent);

//   cout<<"Sum = "<<sum<<endl;
//   cout<<"Percent = "<<percent;
//     return 0;
// }


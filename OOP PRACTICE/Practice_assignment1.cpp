// #include <iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int *ptr;
//     ptr=&a;

//     cout<<"value of a "<<a<<endl;
//     cout<<"address of a "<<&a<<endl;
//     cout<<"a accessed through pointer "<<*ptr<<endl;
//     return 0;
// }

/*SUM OF VALUES USING POINTER*/
// void sum(int a,int b,int *sum_val){
//       *sum_val=a+b;
// }
// int main(){
//     int a=10;
//     int b=70;
//     int sum_value=0;
//     sum(a,b,&sum_value);
//     cout<<"sum of a and b is "<<sum_value<<endl;
//     return 0;
// }


/*MAX VALUE USING POINTER*/
// void max(int num1,int num2,int *max_val){
//        if(num1>num2){
//         *max_val=num1;
//        }
//        else{
//         *max_val=num2;
//        }
// }
// int main(){
//     int a=20;
//     int b=30;
//     int max_val=0;
//    max(a,b,&max_val);
//    cout<<"max value is "<<max_val<<endl;
//    return 0;
// }


#include<iostream>
using namespace std;
int calculate_Toatl_Marks(int *arr)
{
    int result =0;
    for(int i = 0;i<3;i++)
    {
         result = result +arr[i];
    }
    return result;
}
float calculte_percentage(int i )
{
   float percentage = (i / 3.0); 
    return percentage;
}
int main()
{
    int marks_of_subject[3] ;
    int n =3;
    for(int i = 0; i<n;i++)
    {
        cout<<"Enter the marks os subject"<<i+1<<":"<<endl;
        cin>>marks_of_subject[i];
    }
    

    

    int toatl_marks = calculate_Toatl_Marks(marks_of_subject);

    cout<<"Total Marks ="<<toatl_marks<<endl;

    float total_percentage = calculte_percentage(toatl_marks);

    cout<<"Percentage = "<<total_percentage<<"%"<<endl;

    


    return 0;}
// #include <iostream>
// using namespace std;
// void func(int *a,int *b,int **result){
//     if(*a>*b){
//          **result=*a;
//     }
//     else{
//           **result=*b;
//     }
// }
// int main(){
//     int temp=0;
//     int *ptr=&temp;
//     int a=10;
//     int b=20;

//     cout<<"before fxn call temp value:"<<temp<<endl;
//     cout<<"before fxn call ptr value:"<<*ptr<<endl;
//     func(&a,&b,&ptr);

//      cout<<"before fxn call temp value:"<<temp<<endl;
//     cout<<"before fxn call ptr value:"<<*ptr<<endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;
// int* func(int length){
//    int *arr=new int[length];
//    for(int i=0;i<length;i++)
//    {
//       *(arr+i)=(i+1);
//    }
//    return arr;
// }
// int main(){
//     int size;
//     cin>>size;
//     int *received_array=func(size);
//     cout<<"value stored in other fxn";
//     for(int i=0;i<size;i++){
//         cout<<"\n"<<*(received_array+i);
//     }

//     delete[] received_array;
//     received_array=NULL;
// }

/*LABTASK 2*/
/*QUESTION 1*/
// #include <iostream>
// using namespace std;
// void high_score(int *score1, int *score2, int **ptr){ 
//     if(*score1>*score2){
//           **ptr=*score1;
//     }
//     else{
//         **ptr=*score2;
//     }
// }
// int main(){
//     int std1_marks;
//     int std2_marks;
//     cout<<"MARKS OF STUDENT 1 ";
//     cin>>std1_marks;
//     cout<<"MARKS OF STUDENT 2 ";
//     cin>>std2_marks;
//     if(std1_marks==std2_marks){
//        cout<<"BOTH STUDENTS HAVE SAME MARKS";
//     }
//    else{
//     int highest=0;
//     int *ptr= &highest;
//     high_score(&std1_marks,&std2_marks,&ptr);
//     cout<<"SELECTED STUEDENT MARKS = "<<highest;
//    }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// float* calculate_training_score(int length){
//     float *arr=new float [length];
//    for(int i=0;i<length;i++){
//     cout<<"TRAINING SCORE FOR TEACHER 1 ";
//     cin>>*(arr+i);
//    }
//    return arr;
// }
// void display_score(float **ptr, int length){
//     cout<<"TRAINING SCORES:"<<endl;
//     for(int i=0;i<length;i++){
//         cout<<"TEACHER "<<i+1<<" "<<**(ptr+i)<<endl;
//     }
// }
// int main(){
//     int num_teachers;
//     cout<<"NUMBER OF TEACHERS: ";
//     cin>>num_teachers;
//     float *recieved_array = calculate_training_score(num_teachers);
//     float *ptr[num_teachers];
//     for(int i=0;i<num_teachers;i++){
//              ptr[i]=recieved_array++;
//     }
//     display_score(ptr,num_teachers); 
      
//    delete [] recieved_array;
//    return 0;
// }

#include <iostream>
using namespace std;

/*PASS ARRAY TO FXN*/
// void total(int *marks,int *sum){
//     *sum=0;
//     for(int i=0;i<3;i++){
//         *sum+=*(marks+i);
//     }
// }
// int main(){
//     int marks[3]={23,45,67};
//     int sum;
//    total(marks,&sum);
//   cout<<sum;
// }


/*LARGEST VALUE IN ARRAY*/
// void large_val(int *num,int *largest){
//        *largest=*(num);
//        for(int i=0;i<5;i++){
//         if(*(num+i)>*largest){
//             *largest=*(num+i);
//         }
//        }

// }
// int main(){
//     int numbers[5]={3,6,49,8,7};
//     int largest;
//     large_val(numbers,&largest);
//     cout<<largest;
// }



/*DYNAMIC MEMORY ALLOCATION FOR ARRAY*/
// int main(){
//     int *num;
//     num=new int[5];

// for(int i=0;i<5;i++){
//     cin>>*(num+i);
// }

// delete[] num;
// }

/*REVERSE A STRING*/
// #define string_size 8
// void reverse_arr(char *name){
    
//         for(int i=string_size; i>=0; i--){
//             cout<<*(name+i);
//         }
// }
// int main(){
//     char name[string_size]="Waleeja";
//       reverse_arr(name);

// }

/*COUNT VOWELS*/
// void transverse_arr(char *arr){
//     int count=0;
//     for(int i=0;i<5;i++){
//         if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u'){
//              count++;
//         }
//     }
//     cout<<count;
// }
// int main(){
//     char arr[5]={'a','e','o','u','i'};
//      transverse_arr(arr);
// }


/*COPY STRING WITH BUILT-IN FXN*/
// void copy_str(char *string){
//     char copy_strg[50];
//     int i;
//     for( i=0;string[i]!='\0';i++){
//         copy_strg[i]=string[i];
//     }
//     copy_strg[i]='\0';
//     cout<<copy_strg;
// }
// int main(){
//     char str[50]="waleeja";
//      copy_str(str);
// }

/*FREQUENCY OF AN ELEMENT*/
// void freq(int *num){
//     int count=0;
//     for(int i=0;i<5;i++){
//         for(int j=i-1;j>=0;j--){
//           if(*(num+i)==*(num+j)){
// count++;
//           }
//         }
//     }
//     cout<<count;
// }
// int main(){
//     int nums[5]={2,2,4,3,2};
    
//      freq(nums);
// }


/*PASSING ARR TO FXN*/
// int sum_arr(int *arr, int size){
//     int sum=0;
//     for(int i=0;i<size;i++){
//            sum+=*(arr+i);
//     }
//     return sum;
// }
// int main(){
//     int size=4;
//     int arr[size]={3,4,5,6};
//     int sum=sum_arr(arr,size);
//     cout<<sum;
// }


/*UNIQUE ELEMENTS IN AN ARR*/
// void unique(int *array){
//     for(int i=0;i<4;i++){
//         bool unique=false;
//         for(int j=i-1;j>=0;j--){
//             if(*(array+i)!=*(array+j)){
//                 unique = true;
//             }
//         }
//         if(unique){
//             cout<<*(array+i);
//         }
//     }
// }
// int main(){
//     int arr[4]={2,2,3,4};
//     unique(arr);

// }


int main(){
    char *ptr=new char[6];
    *ptr="walee";
     *(ptr+1)='o';
       *(ptr+3)='p';
    
    cout<<*ptr;
    delete[] ptr;
}
    
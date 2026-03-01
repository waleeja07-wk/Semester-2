#include <iostream>
using namespace std;
#define Q 3
void input_marks(){
    
}
int main(){
    int choice;
    int no_of_classes;
    int tot_std[no_of_classes];


    float quiz_marks[no_of_classes][tot_std[no_of_classes]][Q];
   do{
   cout<<"========== QUIZ ANALYSIS SYSTEM =========="<<endl;
   cout<<"1. Enter quiz marks"<<endl;
   cout<<"2. Display quiz marks"<<endl;
   cout<<"3. Calculate student average"<<endl;
   cout<<"4. Calculate class average"<<endl;
   cout<<"5. Find maximum quiz mark in a class"<<endl;
   cout<<"6. Identify best performing class"<<endl;
   cout<<"7. Adjust quiz marks for fairness"<<endl;
   cout<<"8. Exit"<<endl;
   cout<<"Enter your choice:";
   cin>>choice;
  
   switch(choice){
    case 1:
      cout<<"Enter number of classes:";
      cin>>no_of_classes;
      for(int i=0;i<no_of_classes;i++){
          cout<<"Enter number of students in class "<<i+1<<" : " ;
          cin>>tot_std[i];
          for(int j=0;j<tot_std[i];j++){
            cout<<"Enter quiz marks for student "<<j+1<<" : ";
             for(int k=0;k<Q-j;k++){
                cin>>quiz_marks[i][j][k];
             }
          }
      }
      break;
    case 2:
    cout<<"Number of classes:"<<no_of_classes;
     
      for(int i=0;i<no_of_classes;i++){
          cout<<"Enter number of students in class "<<i+1<<" : "<<tot_std[i];
         
          for(int j=0;j<tot_std[i];j++){
            cout<<"Quiz marks for student "<<j+1<<" : ";
             for(int k=0;k<Q-j;k++){
                cout<<quiz_marks[i][j][k];
             }
          }
      }
      break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        cout<<"EXITING";
    break;

   }
   
}
 while(choice!=8);

}
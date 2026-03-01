#include <iostream>
using namespace std;
int main(){
    int camp=3;
    int dep=3;
    int **std_num=new int*[camp];
    for(int i=0;i<camp;i++){
        *(std_num+i)=new int[dep];

    }
    for(int i=0;i<camp;i++)
    {
     if(i==0)
    
     {   //first camp
        for(int j=0;j<dep;j++)
        {
          
     if(j==0)
     {
       
        cout<<"enter students for Peshawar Campus - COMP SCI ";
        cin>>*(*(std_num+i)+j);
     }
     if(j==1)
     {
        cout<<"enter students for Peshawar Campus - SOFT ENGR ";
        cin>>*(*(std_num+i)+j);
     }
     if(j==2)
     {
        cout<<"enter students for Peshawar Campus - DATA SCI ";
        cin>>*(*(std_num+i)+j);
     }
        }
     }
    
     if(i==1)
     {   //second camp
        for(int j=0;j<dep;j++)
        {
     if(j==0)
     {
        cout<<"enter students for Islamabad Campus - COMP SCI ";
        cin>>*(*(std_num+i)+j);
     }
     if(j==1)
     {
        cout<<"enter students for Islamabad Campus - SOFT ENGR ";
        cin>>*(*(std_num+i)+j);
     }
     if(j==2)
     {
        cout<<"enter students for Islamabad Campus - DATA SCI ";
        cin>>*(*(std_num+i)+j);
     }
        }
     }

 
     if(i==2)
     {   //third camp
        for(int j=0;j<dep;j++)
        {
     if(j==0)
     {
        cout<<"enter students for Lahore Campus - COMP SCI ";
        cin>>*(*(std_num+i)+j);
     }
     if(j==1)
     {
        cout<<"enter students for Lahore Campus - SOFT ENGR ";
        cin>>*(*(std_num+i)+j);
     }
     if(j==2)
     {
        cout<<"enter students for Lahore Campus - DATA SCI ";
        cin>>*(*(std_num+i)+j);
     }
        }
     }
    }
   cout<<"----------------------------------------------"<<endl;
    cout<<"Campus/Department"<<"\t"<<"CS  SE  DS"<<endl;
  cout<<"----------------------------------------------"<<endl;
    for(int i=0;i<camp;i++){
        if(i==0){
            cout<<"Peshawar Campus"<<"\t\t";
            
        for(int j=0;j<dep;j++){
          cout<<*(*(std_num+i)+j)<<"  ";
          }
          cout<<endl;
        }
        else if(i==1){
            cout<<"Islamabad Campus"<<"\t";
            
        for(int j=0;j<dep;j++){
          cout<<*(*(std_num+i)+j)<<"  ";
          }
          cout<<endl;
        }
        else if(i==2){
            cout<<"Lahore Campus"<<"\t\t";
            
        for(int j=0;j<dep;j++){
          cout<<*(*(std_num+i)+j)<<"  ";
          }
          cout<<endl;
        }
    }

    for (int i=0;i<camp;i++){
        delete[] std_num[i];
    }
    delete[] std_num;
    return 0;
}


// #include <iostream>
// using namespace std;
// int main(){
//  int row=3;
//  int col=3;
// bool **enemy=new bool*[row];
//  for(int i=0;i<row;i++){
//    *(enemy+i)=new bool[col];
//  }

//  for(int i=0;i<row;i++){
//    for(int j=0;j<col;j++){
//       cin>>*(*(enemy+i)+j);
//    }
//  }
//  int enemy_count=0;
//  for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//          if(*(*(enemy+i)+j)==1){
//             enemy_count++;
//          }
//         }
//  }
//  cout<<"Total live enemies: "<<enemy_count<<endl;
//  int i;
//  int j;
//  int hit_count=0;
//  do{
//   cout<<"Enter row and column "<<endl;
//    cin>>i;
//    cin>>j;
//    if(*(*(enemy+i)+j)==1){
//   *(*(enemy+i)+j)=0;
//    cout<<"hit. enemy destroyed"<<endl;
//    enemy_count--;
//    hit_count++;

//    }
//  }while(enemy_count!=0);
//  cout<<"All enemies are destroyed"<<endl;
//  cout<<"total hits required "<<hit_count<<endl;

//  for(int p=0;p<row;p++){
//   for(int q=0;q<col;q++){
//     cout<<*(*(enemy+i)+j)<<" ";
//   }
//   cout<<endl;
//  }

//  for(int k=0;k<row;k++){
//   delete[] enemy[i];
// }
// delete[] enemy;
// }
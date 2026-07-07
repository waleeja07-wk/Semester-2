/*LAB 4 TASKS*/
/* QUESTION 1 */

#include <iostream>
#include <string>
using namespace std;
// struct car{
//    string model;
//    int year;
//    float price;
// };

// int main(){
//     car data[3];
//     cout<<"Enter details of 3 cars"<<endl;
//     for(int i=0;i<3;i++){
//         cout<<"Car "<<i+1<<endl;
//         cout<<"Model ";
//          cin>>data[i].model;
//          cout<<"Price ";
//          cin>>data[i].price;
//          cout<<"Year ";
//          cin>>data[i].year;
//     }
        
//     cout<<"Cars with price above 500000"<<endl;
//     float final_price; 
//     for(int i=0;i<3;i++){

//         final_price = data[i].price;  
//         if(final_price>500000){
//             cout<<"Model "<<data[i].model<<endl;
//             cout<<"Price "<<data[i].price<<endl;
//             cout<<"Year "<<data[i].year<<endl;
//         }
//     }
//     return 0;
//     }
    
/*QUESTION 2*/
struct address{
    string city;
    string country;
};
struct contact_info{
    string name;
    string phone_no;
    address add;
};
int main(){
    contact_info pple_data[10];
    for(int i=0;i<5;i++){
     cout<<"ENTER DETAILS OF PERSON "<<i+1<<endl;
     cout<<"Name: ";
     cin>>pple_data[i].name;
     cout<<"Phone Number ";
     cin>>pple_data[i].phone_no;
     cout<<"City ";
     cin>>pple_data[i].add.city;
     cout<<"Country ";
     cin>>pple_data[i].add.country;
    }

    cout<<"=================================="<<endl;
    for(int i=0;i<5;i++){
     cout<<"CONTACT INFORMATION OF PERSON "<<i+1<<endl;
     cout<<"Name: "<<pple_data[i].name<<endl;
     
     cout<<"Phone Number "<<pple_data[i].phone_no<<endl;
     
     cout<<"City "<<pple_data[i].add.city<<endl;
     
     cout<<"Country "<<pple_data[i].add.country<<endl;
    
    }


}

/*QUESTION 3*/
// struct camera{
//     int megapixels;
    
// };
// struct mobile{
//     camera cam;
//     float price; 
// };
// mobile info[5];

// // //===================================== Logic==============================

// void show_report__mobile(){
// int avg;
// int sum=0;
// int count1=0;
// int count2=0;
// int expensive;
// int highest_MP;
// //     //========================= All Data 
//     for(int i=0;i<5;i++){
//         cout<<"=================="<<endl;
//         cout<<"Data for mobile "<<i+1<<endl;
//         cout<<"=================="<<endl;
//         cout<<"Megapixels: "<<info[i].cam.megapixels<<endl;
//         cout<<"Price: "<<info[i].price<<endl;
//     }

// //     // =================== Most expensive
//     expensive=info[0].price;
//    for(int i=0;i<5;i++){
//     if(info[i].price>expensive){
//         expensive=info[i].price;
//     }
//    }
//     cout<<"Most Expensive Price: "<<expensive<<endl;

//      highest_MP=info[0].cam.megapixels;
//     for(int i=0;i<5;i++){
//     if(info[i].cam.megapixels>highest_MP){
//         highest_MP=info[i].cam.megapixels;
//     }
//    }
//    cout<<"Highest Camera MP: "<<highest_MP<<endl;


//    for(int i=0;i<5;i++){
//           sum+=info[i].price;
//           count1++;
//    }
//    avg=sum/count1;
//    cout<<"Average Price: "<<avg<<endl;

   
// for(int i=0;i<5;i++){
//     if(info[i].cam.megapixels>=50){
//         count2++;
//     }
// }
// cout<<"Mobiles with Camera >= 50MP: "<<count2<<endl;

// }

// int main(){
    
//     for(int i=0;i<5;i++){
//         cout<<"ENTER DATA FOR MOBILE "<<i+1<<" "<<endl;
//         cout<<"Enter megapixels(>0): ";

//         cin>>info[i].cam.megapixels;

//         cout<<"Enter price(>=0): ";
//         cin>>info[i].price;
//         if(info[i].cam.megapixels<=0 || info[i].price<0){
//             i--;
//             cout<<"Invalid data"<<endl;
//         }
//     }
//     show_report__mobile();
// }




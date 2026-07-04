#include <iostream>
using namespace std;
class vector{
protected:
   int size;  //num of elements present
   int capacity;  //memory allocated
   int *arr;
public:
   vector(){
   	    size = 0;  
   	    capacity= 1;  
   	    arr = new int [capacity];
   }
   vector(int c){
        size =0;
   	    capacity= c;
   	    arr = new int [capacity];
   }
   
   void resize(){
   	    capacity *= 2;
   	    int *newarr = new int [capacity]; // larger array allocated

   	    for(int i=0;i<size;i++){
   	    	newarr[i]=arr[i];  //old elements copied to new array
		   }
		   delete[] arr; 
        arr = newarr;

   }
   
   void push_back(int value){
   	    if (size == capacity ) {  //incase array is full
            resize();
        }
        arr[size] = value;  //place element at the latest available index
        size++;
   }
   int get(int num){
          return arr[num]; 
   }
   int find_len(){
   	    
		 return size;
   }
    void display_info() {
       for (int i = 0; i < size; i++) {
    cout << arr[i]<< " "; // space after every num
}
    }
    ~vector() {
        delete[] arr;
        arr = nullptr;
    }
};
class UniqueVector : public vector {
public:
    void push_back(int val) {
        
        for (int i = 0; i < size; i++) {
            if (arr[i] == val){
                return;  // duplicate found, return
            }
        }

        vector::push_back(val);
    }
};
class FrequencyVector : public vector {
private:
    int *freq;
    int freq_capacity;  //allocated memory of frequency array
  
 
public:
    void resize_freq(int new_capacity) {
        int *newFreq = new int[new_capacity];  // larger array
        for (int i = 0; i < freq_capacity; i++){
            newFreq[i] = freq[i];
        }
        delete[] freq;
        freq = newFreq;
        capacity = new_capacity;
    }

 FrequencyVector() 
    {
        freq_capacity =1;
        freq = new int[freq_capacity];  //freq[i] holds arr[i] count
    }
    ~FrequencyVector() {
        delete[] freq;
        freq = nullptr;
    }
 
    void push_back(int val) {
        
        for (int i = 0; i < size; i++) {
            if (arr[i] == val) {  //val already present
                freq[i]++;   //increase it's count
                return;
            }
        }
       
        if (size == freq_capacity){
            resize_freq(freq_capacity * 2);
        }
        arr[size] = val;
        freq[size] = 1; //set freq to  1
        size++;
    }
 
    int get_freq(int val)  {
        for (int i = 0; i < size; i++) {
            if (arr[i] == val){
                return freq[i]; // return its count
            }
        }
        return 0; 
    }
};
 
int main(){
//---------INPUT--------------
// VECTOR CLASS
    int vec_size;
    cout<<"SIZE OF VECTOR ELEMENTS: ";
    cin >> vec_size;
    vector v1;
    cout<<"ELEMENTS: ";
    for (int i = 0; i < vec_size; i++) {
        int val; 
        cin >> val;
        v1.push_back(val);
    }
 

//UNIQUE VECTOR CLASS
    int uv_size;
   cout<<"SIZE OF UNIQUE VECTOR ELEMENTS: ";
    cin >> uv_size;
    UniqueVector uv1;
cout<<"ELEMENTS: ";
    for (int i = 0; i < uv_size; i++) {
        int val; 
        cin >> val;
        uv1.push_back(val);
    }
 
// FREQUENCY VWCTOR CLASS
    int fv_size;
    cout<<"SIZE OF FREQUENCY VECTOR ELEMENTS: ";
    cin >> fv_size;
    FrequencyVector fv1;
    cout<<"ELEMENTS: ";
    for (int i = 0; i < fv_size; i++) {
        int val; 
        cin >> val;
        fv1.push_back(val);
    }
 
// FREQUENCY OF SPECIFIC VALUES
    int A, B, C;
    cout<<"VALUES ";
    cin >> A;
    cin >> B;
    cin >> C;
 
    
// ----------OUTPUT---------------
    cout << "Printing vector : ";
    v1.display_info();
    cout<<endl;
 
    cout << "Printing unique vector : ";
    uv1.display_info();
    cout<<endl;
 
    cout << "Printing the frequency vector : ";
    fv1.display_info();
    cout<<endl;
 
        cout << fv1.get_freq(A) << " ";
        cout << fv1.get_freq(B) << " ";
        cout << fv1.get_freq(C) << endl;
 
    return 0;
}
	
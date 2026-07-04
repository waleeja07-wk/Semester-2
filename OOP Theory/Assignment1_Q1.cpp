#include <iostream>
#define Stringlength 50
using namespace std;
void StringConcatenate(char *str1, char *str2){
     cout<<"Enter 1st string"<<endl;
		cin>>str1;
	
    cout<<"Enter 2nd string"<<endl;
		cin>>str2;
	
	int i=0;
    while(*(str1+i)!='\0'){
        i++;
    }
    for(int j=0;*(str2+j)!='\0';j++){
        *(str1+i)=*(str2+j);
        i++;
    }
  *(str1+i)='\0';
    cout<<str1;
     cout<<endl;
}

void CompressString(char *str){
	cout<<"Enter a string"<<endl;
    cin>>str;
    
	for(int i=0;*(str+i)!='\0';i++){
		int j;
	       for(j=0;j<i;j++){
	       	if(*(str+i)==*(str+j)){
                  break;
		   }
		}
        if (j==i){
            cout<<*(str+i);
        }
       
	}
     cout<<endl;
}


char* SentenceReversal(char *line){

	  int len=0;
      
    while(*(line+len)!='\0'){
        len++;
       
    }
     int end=len-1;
   
    char *rev_str=new char[len+1];
    int pos=0;
   int k;
  for(int j=end;j>=0;j--){
    if(*(line+j)==' ' || j==0){
        if(j==0){
          k=0;
        }
        else{
         k=j+1;
        }
        while(*(line+k)!=' ' && *(line+k)!='\0'){
            *(rev_str+pos)=*(line+k);
            pos++;
            k++;
        }
        if(j!=0){
        *(rev_str+pos) = ' ';
        pos++;
        }
       
    }
  }
   *(rev_str+pos)='\0';
   return rev_str;
}


void pluralWords(char **s, int wordCount){
    
      
    char last = *s[wordCount-1];  
    char sec_last = *s[wordCount-2];
      char third_last=*s[wordCount-3];
    

         if(last=='h' && (sec_last=='s'|| sec_last=='c' )){
            **(s+wordCount)='e';
            **(s+wordCount+1)='s';
             **(s+wordCount+2)='\0';
         }

         else if(last=='s' || (last=='s' && sec_last=='i') ){
            **(s+wordCount)='e';
             **(s+wordCount+1)='s';
            **(s+wordCount+2)='\0';
         }
         else if((last=='s' || last=='z') && (sec_last!='a' || sec_last!='e' || sec_last!='i' 
            || sec_last!='o' || sec_last!='u')){
               **(s+wordCount) ='e';
            **(s+wordCount+1)='s';
            **(s+wordCount+2)='\0';
            }
        else if(third_last=='a' && sec_last=='t' && sec_last=='o'){
             **(s+wordCount)='e';
            **(s+wordCount+1)='s';
            **(s+wordCount+2)='\0';
        }

        else if(last=='z' && (sec_last=='a' || sec_last=='e')){
            **(s+wordCount)='z';
           **(s+wordCount+1)='e';
             **(s+wordCount+2)='s';
            **(s+wordCount+3)='\0';
        }
        else if(last=='s' && (sec_last=='a' || sec_last=='e')){
           **(s+wordCount)='s';
            **(s+wordCount+1)='e';
             **(s+wordCount+2)='s';
             **(s+wordCount+3)='\0';
        }
        else if(last=='f' && sec_last=='f'){
            **(s+wordCount)='s';
           
             **(s+wordCount+1)='\0';
        }
        else if(last=='f' || (sec_last=='f' && last=='e')){
           if(last=='f'){
            last = 'v';
            **(s+wordCount)='e';
           **(s+wordCount+1)='s';
             **(s+wordCount+2)='\0';
           }
           else{
            sec_last='v';
            last='e';
            **(s+wordCount)='s';
           **(s+wordCount+1)='\0';
           }
        }
        else if(sec_last =='o' && last=='n'){
                 sec_last=='a';
                 last='\0';
        }
        else if(sec_last =='u' && last=='s'){
                 sec_last=='i';
                 last='\0';
        }
        else if( last=='y'){
            if(sec_last=='a'||sec_last=='e'||sec_last=='i'||sec_last=='o'||sec_last=='u'){
                **(s+wordCount)='s';
               **(s+wordCount+1)='\0';
            }
            else{
                last='i';
                **(s+wordCount)='e';
                **(s+wordCount+1)='s';
                **(s+wordCount+2)='\0';
            }
        }
        else{
             **(s+wordCount)='s';
              **(s+wordCount+1)='\0';
        }
   
  

   for(int i=0;**(s+i)!='\0';i++){
    cout<<**(s+i);
   }
}


int main(){
    int choice;
    char str1[Stringlength];
    char str2[Stringlength];
    char *ptr1=str1;
    char *ptr2=str2;
    char sentence[Stringlength];
	char *sntnce;
   int size=4;
   char word[Stringlength];

           char *ptr=word;
           char **s=&ptr;
           int wordCount=0;

         

    do{
        cout<<"=========== TEXT PROCESSING ENGINE ==========="<<endl;
        cout<<"1. Merge two strings"<<endl;
        cout<<"2. Compress a string"<<endl;
        cout<<"3. Reverse a sentence"<<endl;
        cout<<"4. Convert singular words to plural"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice:"<<endl;
        cin>>choice;

        switch(choice){
            case 1:
              StringConcatenate(ptr1,ptr2);
              break;

            case 2:
              CompressString(ptr1);
              break;

            case 3:
            cout<<"Enter sentence"<<endl;
             cin.ignore(); 
             fgets(sentence,Stringlength, stdin);
              sntnce=SentenceReversal(sentence);
              cout<<sntnce<<endl;
              delete[] sntnce;
              break;

            case 4:
            *s = "harsh";
           for(int i=0;word[i]!='\0';i++){
                 wordCount++;
           }
             pluralWords(s, wordCount);
                 break;

            case 5:
            cout<<"EXITING"<<endl;
              break;
        }
    }
    while(choice!=5);
    return 0;
}
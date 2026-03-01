/*WAY TOO LONG WORDS*/
#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d", &n);
    char words[n][105];
   

    for(int i=0;i<n;i++){
        scanf("%s", words[i]);
    }


    for(int i=0;i<n;i++)
    {
        int len = strlen(words[i]);
        if(len>10){
         printf("%c%d%c\n", words[i][0],len-2,words[i][len-1]);
        }
        else{
            printf("%s\n", words[i]);
        }
    } 
        return 0;
}
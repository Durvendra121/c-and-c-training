#include<stdio.h>
#include <string.h>
int main(){
    char str[]="ababcd";
    
    int ln=   strlen(str);//ln=length
    int freq[256]={0};
    for(int i=0;i<ln;i++){
        freq[str[i]]++;
    }
        for(int j=0;j<ln;j++){
            if(freq [str[j]]==1){

                printf("non reapeted is %c",str[j]);
                break;


            }
        }
    }
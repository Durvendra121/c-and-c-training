#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[4]={1,2,4,5};
    
    int xor=0;
    int xorl=0;

    for (int i=1;i<=5;i++){
        xor=xor^i;
       
    }   
    for (int i=0;i<4;i++){
        xorl=xorl^arr[i];
    } 
   
    printf("%d",xor^xorl);
}
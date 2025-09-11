#include <stdio.h>

int sum(){
    int a = 2;
    int b = 5;
    

    int c = a + b;
    
    return c;
}

int main(){
    int data= sum();   
    printf("%d",data);

    return 0; 
}
#include <stdio.h>


int factorial(int a) {
    if (a==0 || a == 1 ){
        return 1;}  
    else
        return a * factorial(a - 1); 
}

int main() {
  int num=  factorial(3);
    

    
        printf("Factorial is %d" ,  num);

    return 0;
}

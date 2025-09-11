#include <stdio.h>

int sum(){
    int a = 2;
    int b = 5;
    int c;

    c = a + b;
    printf("%d\n", c);
    return 0;
}

int main(){
    sum();   // calling the function
    return 0;
}

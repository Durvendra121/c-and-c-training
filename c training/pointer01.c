#include <stdio.h>

    
    int swap(int *x, int*y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
printf("x=%d y=%d\n",*x,*y);
}
int main(){
    int x = 10;
    int y=20;

    swap(&x,&y);

    return 0;
}
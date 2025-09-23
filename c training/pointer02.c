#include<stdio.h>
int arr[5]={10,20,30,40,50};
    int *p=arr;
    int main (){
         for(int i=0; i<5;i++){
                printf("%d\n",*(p+i));}
                printf("reverse order\n");
        for(int i=4; i>=0;i--){
            printf(" %d\n",*(p+i));

        }
    }



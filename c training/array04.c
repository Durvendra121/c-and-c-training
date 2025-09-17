#include <stdio.h>

int main(){
    int arr[5]={1,2,3,4,7};
    int max=arr[0];
int min=arr[0];
    for (int i=0; i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("max is %d",max);
    printf("\n");
    printf("min is %d",min);
return 0;
}
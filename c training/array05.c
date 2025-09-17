#include <stdio.h>

int main(){
    int arr[5]={1,2,3,5,7};
    int target=5;
    for (int i=0; i<5;i++){
        if(arr[i]==target){
            printf("found at index %d",i);
            return 0;
        }
    }

}
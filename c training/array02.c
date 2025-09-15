#include <stdio.h>

int main(){
    //int a = 2;
    //int b = 5;


int arr[5]={1,2,3,4,5};
int sum=0;
//printf("%d",arr[1]);
for (int i=0; i<5;i++){

    sum=sum+arr[i];

}printf("%d",sum);
return 0;
}
#include<stdio.h>
int sum(int arr[6],int n)
{if(n==0){
    return 0;
     
}
 return arr[n-1]+sum(arr,n-1);
 

}
    int main(){
int arr[6]={2,6,8,5,8,9};
int n=6;
int data = sum(arr,n);
printf("%d",data);
}


 
















